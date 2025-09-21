/* Find Peak Element */

#include <stdio.h>

int findPeak(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]<arr[mid+1]) l=mid+1;
        else r=mid;
    }
    return l;
}

int main(){
    int arr[]={1,2,1,3,5,6,4};
    int n=7;
    printf("Peak Index: %d\n",findPeak(arr,n));
}
