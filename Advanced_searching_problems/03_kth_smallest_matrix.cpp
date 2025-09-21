/* Kth smallest in Sorted Matrix */

#include <bits/stdc++.h>
using namespace std;

int countLE(vector<vector<int>>& mat,int mid){
    int n=mat.size(),cnt=0;
    for(int i=0;i<n;i++){
        int j=n-1;
        while(j>=0 && mat[i][j]>mid) j--;
        cnt+=j+1;
    }
    return cnt;
}

int kthSmallest(vector<vector<int>>& mat,int k){
    int n=mat.size();
    int l=mat[0][0],r=mat[n-1][n-1],ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(countLE(mat,mid)>=k){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    vector<vector<int>> mat={{1,5,9},{10,11,13},{12,13,15}};
    cout<<"Kth Smallest="<<kthSmallest(mat,8)<<endl;
}
