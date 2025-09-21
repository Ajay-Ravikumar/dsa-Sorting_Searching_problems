/* Find first and last occurence of element */

#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr,int target){
    int l=0,r=arr.size()-1,res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){ res=mid; r=mid-1; }
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return res;
}

int lastOccurrence(vector<int>& arr,int target){
    int l=0,r=arr.size()-1,res=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){ res=mid; l=mid+1; }
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return res;
}

int main(){
    vector<int> arr={1,2,2,2,3,4,5};
    int target=2;
    cout<<"First: "<<firstOccurrence(arr,target)<<", Last: "<<lastOccurrence(arr,target)<<endl;
}
