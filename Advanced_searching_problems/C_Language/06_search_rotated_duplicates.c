/* Rotated Array Search with Duplicates */

#include <stdio.h>

int searchRotated(int arr[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x) return 1;
        if(arr[l]==arr[mid] && arr[mid]==arr[r]){ l++; r--; continue; }
        if(arr[l]<=arr[mid]){
            if(x>=arr[l] && x<arr[mid]) r=mid-1;
            else l=mid+1;
        } else {
            if(x>arr[mid] && x<=arr[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[]={2,5,6,0,0,1,2};
    printf("Found=%d\n",searchRotated(arr,7,0));
}
