/* Rotated Array Search with Duplicates */

#include <bits/stdc++.h>
using namespace std;

bool searchRotated(vector<int>& arr,int x){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return true;
        if(arr[l]==arr[mid] && arr[mid]==arr[r]){ l++; r--; continue; }
        if(arr[l]<=arr[mid]){
            if(x>=arr[l] && x<arr[mid]) r=mid-1;
            else l=mid+1;
        } else {
            if(x>arr[mid] && x<=arr[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return false;
}

int main(){
    vector<int> arr={2,5,6,0,0,1,2};
    cout<<"Found="<<searchRotated(arr,0)<<endl;
}
