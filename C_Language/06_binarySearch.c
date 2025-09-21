#include <stdio.h>

int binarySearch(int arr[],int n,int key) {
    int l=0,r=n-1;
    while(l<=r) {
        int m=l+(r-l)/2;
        if(arr[m]==key) return m;
        else if(arr[m]<key) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main() {
    int arr[]={1,2,3,4,5,6};
    printf("Index = %d\n", binarySearch(arr,6,4));
}
