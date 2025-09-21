/* Median of two sorted arrays */

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& A,vector<int>& B){
    if(A.size()>B.size()) return findMedianSortedArrays(B,A);
    int n=A.size(),m=B.size(),l=0,r=n,half=(n+m+1)/2;
    while(l<=r){
        int i=(l+r)/2; int j=half-i;
        int maxLeftA=(i==0?INT_MIN:A[i-1]);
        int minRightA=(i==n?INT_MAX:A[i]);
        int maxLeftB=(j==0?INT_MIN:B[j-1]);
        int minRightB=(j==m?INT_MAX:B[j]);
        if(maxLeftA<=minRightB && maxLeftB<=minRightA){
            if((n+m)%2==0) return (max(maxLeftA,maxLeftB)+min(minRightA,minRightB))/2.0;
            else return max(maxLeftA,maxLeftB);
        } else if(maxLeftA>minRightB) r=i-1; else l=i+1;
    }
    return -1;
}

int main(){
    vector<int>A={1,3}; vector<int>B={2};
    cout<<"Median="<<findMedianSortedArrays(A,B)<<endl;
}
