/* Search in rotated sorted array */

#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& arr,int target){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target) return mid;
        if(arr[l]<=arr[mid]){
            if(arr[l]<=target && target<arr[mid]) r=mid-1;
            else l=mid+1;
        }else{
            if(arr[mid]<target && target<=arr[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int target=0;
    cout<<"Index: "<<searchRotated(arr,target)<<endl;
}
