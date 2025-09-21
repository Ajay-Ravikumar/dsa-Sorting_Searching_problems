/* Aggressive cows (Maximise minimum distance) */

#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& arr,int c,int dist){
    int count=1,last=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=dist){ count++; last=arr[i]; if(count==c) return true; }
    }
    return false;
}

int aggressiveCows(vector<int>& arr,int c){
    sort(arr.begin(),arr.end());
    int l=1,r=arr.back()-arr.front(),ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(canPlace(arr,c,mid)){ ans=mid; l=mid+1; }
        else r=mid-1;
    }
    return ans;
}

int main(){
    vector<int> stalls={1,2,8,4,9}; int c=3;
    cout<<"Max Min Distance: "<<aggressiveCows(stalls,c)<<endl;
}
