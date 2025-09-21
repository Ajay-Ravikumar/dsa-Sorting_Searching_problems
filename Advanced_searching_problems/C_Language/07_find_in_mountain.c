/* Find Element in Mountain Array */

#include <stdio.h>

int peakIndex(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]<arr[mid+1]) l=mid+1;
        else r=mid;
    }
    return l;
}

int binary(int arr[],int l,int r,int x,int asc){
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x) return mid;
        if(asc){ if(x<arr[mid]) r=mid-1; else l=mid+1; }
        else { if(x<arr[mid]) l=mid+1; else r=mid-1; }
    }
    return -1;
}

int findInMountain(int arr[],int n,int x){
    int peak=peakIndex(arr,n);
    int idx=binary(arr,0,peak,x,1);
    if(idx!=-1) return idx;
    return binary(arr,peak+1,n-1,x,0);
}

int main(){
    int arr[]={1,3,5,7,6,4,2};
    printf("Index=%d\n",findInMountain(arr,7,4));
}
