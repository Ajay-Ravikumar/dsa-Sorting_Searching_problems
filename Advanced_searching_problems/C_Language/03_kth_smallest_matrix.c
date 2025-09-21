/* Kth Smallest in Sorted Matrix */

#include <stdio.h>

int countLE(int mat[3][3],int n,int mid){
    int cnt=0;
    for(int i=0;i<n;i++){
        int j=n-1;
        while(j>=0 && mat[i][j]>mid) j--;
        cnt+=j+1;
    }
    return cnt;
}

int kthSmallest(int mat[3][3],int n,int k){
    int l=mat[0][0],r=mat[n-1][n-1],ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(countLE(mat,n,mid)>=k){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    int mat[3][3]={{1,5,9},{10,11,13},{12,13,15}};
    printf("Kth Smallest=%d\n",kthSmallest(mat,3,8));
}
