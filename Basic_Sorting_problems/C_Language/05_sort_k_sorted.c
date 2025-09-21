/* Sort nearly sorted / k-sorted array */

#include <stdio.h>
#include <stdlib.h>

void heapify(int arr[], int n, int i){
    int smallest=i,l=2*i+1,r=2*i+2;
    if(l<n && arr[l]<arr[smallest]) smallest=l;
    if(r<n && arr[r]<arr[smallest]) smallest=r;
    if(smallest!=i){ int t=arr[i]; arr[i]=arr[smallest]; arr[smallest]=t; heapify(arr,n,smallest);}
}

void sortKSorted(int arr[], int n, int k){
    int heapSize=k+1;
    for(int i=heapSize/2-1;i>=0;i--) heapify(arr,heapSize,i);
    int index=0;
    for(int i=k+1;i<n;i++){
        arr[index++]=arr[0]; arr[0]=arr[i]; heapify(arr,heapSize,0);
    }
    while(heapSize>0){ arr[index++]=arr[0]; arr[0]=arr[heapSize-1]; heapSize--; heapify(arr,heapSize,0);}
}

int main(){
    int arr[]={6,5,3,2,8,10,9}; int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    sortKSorted(arr,n,k);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
