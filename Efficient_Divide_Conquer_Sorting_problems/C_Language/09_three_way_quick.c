/* Sort Array with Many Duplicates Efficiently (3-way QuickSort) */

#include <stdio.h>

void threeWayQuickSort(int arr[],int l,int r){
    if(l>=r) return;
    int lt=l, i=l+1, gt=r;
    int pivot=arr[l];
    while(i<=gt){
        if(arr[i]<pivot){ int t=arr[lt]; arr[lt]=arr[i]; arr[i]=t; lt++; i++; }
        else if(arr[i]>pivot){ int t=arr[i]; arr[i]=arr[gt]; arr[gt]=t; gt--; }
        else i++;
    }
    threeWayQuickSort(arr,l,lt-1);
    threeWayQuickSort(arr,gt+1,r);
}

int main(){
    int arr[]={4,9,4,4,9,4,7,7,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    threeWayQuickSort(arr,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
