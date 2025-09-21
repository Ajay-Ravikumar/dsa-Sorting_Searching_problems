/* Quick Sort (Hoare Partition) */

#include <iostream>
#include <vector>
using namespace std;

int hoarePartition(vector<int>& arr,int l,int r){
    int pivot=arr[l], i=l-1, j=r+1;
    while(true){
        do{i++;}while(arr[i]<pivot);
        do{j--;}while(arr[j]>pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}

void quickSort(vector<int>& arr,int l,int r){
    if(l<r){
        int pi=hoarePartition(arr,l,r);
        quickSort(arr,l,pi);
        quickSort(arr,pi+1,r);
    }
}

int main(){
    vector<int> arr={5,2,9,1,5,6};
    quickSort(arr,0,arr.size()-1);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
