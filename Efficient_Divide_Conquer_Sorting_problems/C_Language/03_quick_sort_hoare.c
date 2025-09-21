/* Quick Sort (Hoare Partition) */

#include <stdio.h>

int hoarePartition(int arr[], int l, int r){
    int pivot=arr[l];
    int i=l-1, j=r+1;
    while(1){
        do{i++;}while(arr[i]<pivot);
        do{j--;}while(arr[j]>pivot);
        if(i>=j) return j;
        int t=arr[i]; arr[i]=arr[j]; arr[j]=t;
    }
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi=hoarePartition(arr,l,r);
        quickSort(arr,l,pi);
        quickSort(arr,pi+1,r);
    }
}

int main(){
    int arr[]={5,2,9,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
