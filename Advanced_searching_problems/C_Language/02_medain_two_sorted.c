/* Median of Two Sorted Arrays */

#include <stdio.h>

double medianTwoSorted(int A[],int n,int B[],int m){
    if(n>m) return medianTwoSorted(B,m,A,n);
    int l=0,r=n,half=(n+m+1)/2;
    while(l<=r){
        int i=(l+r)/2;
        int j=half-i;
        int maxLeftA=(i==0?-1e9:A[i-1]);
        int minRightA=(i==n?1e9:A[i]);
        int maxLeftB=(j==0?-1e9:B[j-1]);
        int minRightB=(j==m?1e9:B[j]);
        if(maxLeftA<=minRightB && maxLeftB<=minRightA){
            if((n+m)%2==0) return ( (maxLeftA>maxLeftB?maxLeftA:maxLeftB) + (minRightA<minRightB?minRightA:minRightB) )/2.0;
            else return maxLeftA>maxLeftB?maxLeftA:maxLeftB;
        }
        else if(maxLeftA>minRightB) r=i-1;
        else l=i+1;
    }
    return -1;
}

int main(){
    int A[]={1,3}; int B[]={2}; 
    printf("Median=%.2f\n",medianTwoSorted(A,2,B,1));
}
