/* Find First and Last Occurrence of Element */

#include <stdio.h>

int firstOccurrence(int arr[],int n,int target){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){ res=mid; r=mid-1; }
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return res;
}

int lastOccurrence(int arr[],int n,int target){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){ res=mid; l=mid+1; }
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return res;
}

int main(){
    int arr[]={1,2,2,2,3,4,5};
    int n=7,target=2;
    printf("First: %d, Last: %d\n",firstOccurrence(arr,n,target),lastOccurrence(arr,n,target));
}
