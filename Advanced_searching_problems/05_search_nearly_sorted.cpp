/* Search in Nearlyt Sorted Array */

#include <bits/stdc++.h>
using namespace std;

int searchNearlySorted(vector<int>& arr,int x){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return mid;
        if(mid-1>=l && arr[mid-1]==x) return mid-1;
        if(mid+1<=r && arr[mid+1]==x) return mid+1;
        if(arr[mid]>x) r=mid-2;
        else l=mid+2;
    }
    return -1;
}

int main(){
    vector<int> arr={2,1,3,5,4,6,8,7};
    cout<<"Index="<<searchNearlySorted(arr,5)<<endl;
}
