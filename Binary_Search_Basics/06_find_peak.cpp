/* Find Peak Element */

#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int>& arr){
    int l=0,r=arr.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]<arr[mid+1]) l=mid+1;
        else r=mid;
    }
    return l;
}

int main(){
    vector<int> arr={1,2,1,3,5,6,4};
    cout<<"Peak Index: "<<findPeak(arr)<<endl;
}
