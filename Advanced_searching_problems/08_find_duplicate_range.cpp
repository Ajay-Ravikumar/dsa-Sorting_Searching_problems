/* Find duplicate using binary search on value range */

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr){
    int l=1,r=arr.size()-1,ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2,cnt=0;
        for(int x:arr) if(x<=mid) cnt++;
        if(cnt>mid){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    vector<int> arr={1,3,4,2,2};
    cout<<"Duplicate="<<findDuplicate(arr)<<endl;
}
