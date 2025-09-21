/* Find Single Element in Sorted Array */

#include <stdio.h>

int singleNonDuplicate(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(mid%2==1) mid--;
        if(arr[mid]==arr[mid+1]) l=mid+2;
        else r=mid;
    }
    return arr[l];
}

int main(){
    int arr[]={1,1,2,3,3,4,4,8,8};
    int n=9;
    printf("Single: %d\n",singleNonDuplicate(arr,n));
}
