/* Sort Array with Many Duplicates Efficiently (3-way QuickSort) */

#include <iostream>
#include <vector>
using namespace std;

void threeWayQuickSort(vector<int>& arr,int l,int r){
    if(l>=r) return;
    int lt=l, i=l+1, gt=r, pivot=arr[l];
    while(i<=gt){
        if(arr[i]<pivot) swap(arr[lt++],arr[i++]);
        else if(arr[i]>pivot) swap(arr[i],arr[gt--]);
        else i++;
    }
    threeWayQuickSort(arr,l,lt-1);
    threeWayQuickSort(arr,gt+1,r);
}

int main(){
    vector<int> arr={4,9,4,4,9,4,7,7,7,1};
    threeWayQuickSort(arr,0,arr.size()-1);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
