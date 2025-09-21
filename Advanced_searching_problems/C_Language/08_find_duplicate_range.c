/* Find Duplicate using Binary Search on Value Range */

#include <stdio.h>

int findDuplicate(int arr[],int n){
    int l=1,r=n-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2,cnt=0;
        for(int i=0;i<n;i++) if(arr[i]<=mid) cnt++;
        if(cnt>mid){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    int arr[]={1,3,4,2,2};
    printf("Duplicate=%d\n",findDuplicate(arr,5));
}
