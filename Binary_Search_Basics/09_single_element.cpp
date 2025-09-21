/* Find Single Element in Sorted Array */

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr){
    int l=0,r=arr.size()-1;
    while(l<r){
        int mid=(l+r)/2;
        if(mid%2==1) mid--;
        if(arr[mid]==arr[mid+1]) l=mid+2;
        else r=mid;
    }
    return arr[l];
}

int main(){
    vector<int> arr={1,1,2,3,3,4,4,8,8};
    cout<<"Single: "<<singleNonDuplicate(arr)<<endl;
}
