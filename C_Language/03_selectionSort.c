#include <stdio.h>

void selectionSort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        int minIdx=i;
        for (int j=i+1;j<n;j++) if (arr[j]<arr[minIdx]) minIdx=j;
        int t=arr[i]; arr[i]=arr[minIdx]; arr[minIdx]=t;
    }
}

int main() {
    int arr[]={5,2,9,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for (int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
