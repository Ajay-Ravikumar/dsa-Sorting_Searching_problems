/* Standard binary search */

#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,7,9};
    int n=5,target=7;
    printf("Index: %d\n",binarySearch(arr,n,target));
}
