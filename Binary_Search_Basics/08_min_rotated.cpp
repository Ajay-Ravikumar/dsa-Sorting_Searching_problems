/* Find minimum in rotated sorted arry */

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr){
    int l=0,r=arr.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]>arr[r]) l=mid+1;
        else r=mid;
    }
    return arr[l];
}

int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    cout<<"Min: "<<findMin(arr)<<endl;
}
