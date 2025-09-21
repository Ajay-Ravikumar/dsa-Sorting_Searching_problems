/* Peak Element in 2D Matrix */

#include <bits/stdc++.h>
using namespace std;

int findPeak2D(vector<vector<int>>& mat){
    int n=mat.size(),m=mat[0].size();
    int l=0,r=m-1;
    while(l<=r){
        int mid=(l+r)/2,row=0;
        for(int i=0;i<n;i++) if(mat[i][mid]>mat[row][mid]) row=i;
        if(mid>0 && mat[row][mid]<mat[row][mid-1]) r=mid-1;
        else if(mid<m-1 && mat[row][mid]<mat[row][mid+1]) l=mid+1;
        else return mat[row][mid];
    }
    return -1;
}

int main(){
    vector<vector<int>> mat={{10,8,10,10},{14,13,12,11},{15,9,11,21},{16,17,19,20}};
    cout<<"Peak="<<findPeak2D(mat)<<endl;
}
