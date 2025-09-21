/* 7. Implement Bubble Sort with early stopping optimization. */

#include <stdio.h>

void bubbleSortEarly(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j]; arr[j]=arr[j+1]; arr[j+1]=t;
                swapped=1;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSortEarly(arr,n);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
