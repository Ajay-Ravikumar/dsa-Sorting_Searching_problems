/* Aggressive Cows (Maximise Minimum Distance) */

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){ return (*(int*)a-*(int*)b); }

int canPlace(int arr[],int n,int c,int dist){
    int count=1,last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){ count++; last=arr[i]; if(count==c) return 1; }
    }
    return 0;
}

int aggressiveCows(int arr[],int n,int c){
    qsort(arr,n,sizeof(int),cmp);
    int l=1,r=arr[n-1]-arr[0],ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(canPlace(arr,n,c,mid)){ ans=mid; l=mid+1; }
        else r=mid-1;
    }
    return ans;
}

int main(){
    int stalls[]={1,2,8,4,9}; int n=5,c=3;
    printf("Max Min Distance: %d\n",aggressiveCows(stalls,n,c));
}
