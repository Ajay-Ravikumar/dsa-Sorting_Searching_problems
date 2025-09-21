/* Minimize Maximum Difference Among Subsets */

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){ return (*(int*)a-*(int*)b); }

int minimizeMaxDiff(int arr[],int n,int k){
    qsort(arr,n,sizeof(int),cmp);
    int ans=1e9;
    for(int i=0;i+k-1<n;i++){
        int diff=arr[i+k-1]-arr[i];
        if(diff<ans) ans=diff;
    }
    return ans;
}

int main(){
    int arr[]={10,100,300,200,1000,20,30};
    int n=7,k=3;
    printf("Minimized Diff=%d\n",minimizeMaxDiff(arr,n,k));
}
