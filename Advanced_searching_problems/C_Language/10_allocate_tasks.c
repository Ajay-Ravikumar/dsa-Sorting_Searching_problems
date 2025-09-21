/* Allocate Tasks/Machines/Jobs Optimally (Binary Search) */

#include <stdio.h>

int isPossible(int arr[],int n,int m,int maxLoad){
    int workers=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxLoad) return 0;
        if(sum+arr[i]>maxLoad){ workers++; sum=arr[i]; }
        else sum+=arr[i];
        if(workers>m) return 0;
    }
    return 1;
}

int allocateTasks(int arr[],int n,int m){
    int l=0,r=0,ans=-1;
    for(int i=0;i<n;i++){ r+=arr[i]; if(arr[i]>l) l=arr[i]; }
    while(l<=r){
        int mid=(l+r)/2;
        if(isPossible(arr,n,m,mid)){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,40}; int n=4,m=2;
    printf("Minimized Max Load=%d\n",allocateTasks(arr,n,m));
}
