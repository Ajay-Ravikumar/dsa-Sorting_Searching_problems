/* Quick Sort (Lomuto Partition) */

#include <stdio.h>

int partition(int arr[], int l, int r){
    int pivot=arr[r], i=l-1;
    for(int j=l;j<r;j++)
        if(arr[j]<=pivot){ i++; int t=arr[i]; arr[i]=arr[j]; arr[j]=t; }
    int t=arr[i+1]; arr[i+1]=arr[r]; arr[r]=t;
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quickSort(arr,l,pi-1);
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
