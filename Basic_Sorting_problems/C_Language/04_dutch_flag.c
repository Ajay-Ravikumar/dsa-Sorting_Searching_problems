/* Sort 0s,1s,2s (Dutch National Flag) */

#include <stdio.h>

void sort012(int arr[], int n){
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){ int t=arr[low]; arr[low]=arr[mid]; arr[mid]=t; low++; mid++; }
        else if(arr[mid]==1) mid++;
        else { int t=arr[mid]; arr[mid]=arr[high]; arr[high]=t; high--; }
    }
}

int main(){
    int arr[]={0,1,2,0,1,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}
