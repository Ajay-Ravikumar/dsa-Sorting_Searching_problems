#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr,int key) {
    int l=0,r=arr.size()-1;
    while(l<=r) {
        int m=l+(r-l)/2;
        if(arr[m]==key) return m;
        else if(arr[m]<key) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main() {
    vector<int> arr={1,2,3,4,5,6};
    cout<<"Index = "<<binarySearch(arr,4)<<endl;
}
