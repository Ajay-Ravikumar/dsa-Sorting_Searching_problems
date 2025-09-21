/* Minimise Maximum Difference among Subsets */

#include <bits/stdc++.h>
using namespace std;

int minimizeMaxDiff(vector<int>& arr,int k){
    sort(arr.begin(),arr.end());
    int ans=INT_MAX;
    for(int i=0;i+k-1<arr.size();i++){
        ans=min(ans,arr[i+k-1]-arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr={10,100,300,200,1000,20,30};
    int k=3;
    cout<<"Minimized Diff="<<minimizeMaxDiff(arr,k)<<endl;
}
