/* 6. Count inversions using bubble/merge approach. */

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& arr, vector<int>& temp,int l,int m,int r){
    int i=l,j=m+1,k=l,inv=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]) temp[k++]=arr[i++];
        else { temp[k++]=arr[j++]; inv+=m-i+1; }
    }
    while(i<=m) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];
    for(int x=l;x<=r;x++) arr[x]=temp[x];
    return inv;
}

int mergeSort(vector<int>& arr,vector<int>& temp,int l,int r){
    int inv=0;
    if(l<r){
        int m=(l+r)/2;
        inv+=mergeSort(arr,temp,l,m);
        inv+=mergeSort(arr,temp,m+1,r);
        inv+=merge(arr,temp,l,m,r);
    }
    return inv;
}

int main(){
    vector<int> arr={1,20,6,4,5};
    vector<int> temp(arr.size());
    cout << "Inversions = " << mergeSort(arr,temp,0,arr.size()-1) << endl;
}
