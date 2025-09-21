/* Count inversions */

#include <stdio.h>

int merge(int arr[], int temp[], int l, int m, int r){
    int i=l,j=m+1,k=l, inv_count=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]) temp[k++]=arr[i++];
        else { temp[k++]=arr[j++]; inv_count+=(m-i+1); }
    }
    while(i<=m) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];
    for(int x=l;x<=r;x++) arr[x]=temp[x];
    return inv_count;
}

int mergeSort(int arr[], int temp[], int l, int r){
    int inv_count=0;
    if(l<r){
        int m=(l+r)/2;
        inv_count+=mergeSort(arr,temp,l,m);
        inv_count+=mergeSort(arr,temp,m+1,r);
        inv_count+=merge(arr,temp,l,m,r);
    }
    return inv_count;
}

int main(){
    int arr[]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    printf("Inversions = %d\n",mergeSort(arr,temp,0,n-1));
}
