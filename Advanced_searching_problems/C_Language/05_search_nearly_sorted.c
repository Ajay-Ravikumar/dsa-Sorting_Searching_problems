/* Search in Nearly Sorted Array */

#include <stdio.h>

int searchNearlySorted(int arr[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x) return mid;
        if(mid-1>=l && arr[mid-1]==x) return mid-1;
        if(mid+1<=r && arr[mid+1]==x) return mid+1;
        if(arr[mid]>x) r=mid-2;
        else l=mid+2;
    }
    return -1;
}

int main(){
    int arr[]={2,1,3,5,4,6,8,7};
    printf("Index=%d\n",searchNearlySorted(arr,8,5));
}
