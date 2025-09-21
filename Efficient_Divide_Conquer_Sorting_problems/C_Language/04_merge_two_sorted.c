/* Merge Two Sorted Arrays Without Extra Space */

#include <stdio.h>

void mergeArrays(int a[], int b[], int n, int m){
    for(int i=0;i<n;i++){
        if(a[i]>b[0]){
            int t=a[i]; a[i]=b[0]; b[0]=t;
            int first=b[0], k;
            for(k=1;k<m && b[k]<first;k++) b[k-1]=b[k];
            b[k-1]=first;
        }
    }
}

int main(){
    int a[]={1,5,9,10,15,20}, b[]={2,3,8,13};
    int n=6, m=4;
    mergeArrays(a,b,n,m);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    for(int i=0;i<m;i++) printf("%d ",b[i]);
    printf("\n");
}
