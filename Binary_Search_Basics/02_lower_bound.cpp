/* Lower Bound (first element ≥ target) */

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& arr,int target){
    int l=0,r=arr.size();
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]<target) l=mid+1;
        else r=mid;
    }
    return l;
}

int main(){
    vector<int> arr={1,2,4,4,5,7};
    int target=4;
    cout<<"Lower Bound Index: "<<lowerBound(arr,target)<<endl;
}
