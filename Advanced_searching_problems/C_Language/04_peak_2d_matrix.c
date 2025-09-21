/* Peak element in 2D Matrix */

#include <stdio.h>

int findPeak2D(int mat[4][4],int n,int m){
    int l=0,r=m-1;
    while(l<=r){
        int mid=(l+r)/2;
        int row=0;
        for(int i=0;i<n;i++) if(mat[i][mid]>mat[row][mid]) row=i;
        if(mid>0 && mat[row][mid]<mat[row][mid-1]) r=mid-1;
        else if(mid<m-1 && mat[row][mid]<mat[row][mid+1]) l=mid+1;
        else return mat[row][mid];
    }
    return -1;
}

int main(){
    int mat[4][4]={{10,8,10,10},{14,13,12,11},{15,9,11,21},{16,17,19,20}};
    printf("Peak=%d\n",findPeak2D(mat,4,4));
}
