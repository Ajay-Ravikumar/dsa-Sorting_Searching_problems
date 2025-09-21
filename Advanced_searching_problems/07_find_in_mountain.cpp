/* Find element in Mountain Array */

#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>& arr){
    int l=0,r=arr.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]<arr[mid+1]) l=mid+1;
        else r=mid;
    }
    return l;
}

int binary(vector<int>& arr,int l,int r,int x,bool asc){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return mid;
        if(asc){ if(x<arr[mid]) r=mid-1; else l=mid+1; }
        else { if(x<arr[mid]) l=mid+1; else r=mid-1; }
    }
    return -1;
}

int findInMountain(vector<int>& arr,int x){
    int peak=peakIndex(arr);
    int idx=binary(arr,0,peak,x,true);
    if(idx!=-1) return idx;
    return binary(arr,peak+1,arr.size()-1,x,false);
}

int main(){
    vector<int> arr={1,3,5,7,6,4,2};
    cout<<"Index="<<findInMountain(arr,4)<<endl;
}
