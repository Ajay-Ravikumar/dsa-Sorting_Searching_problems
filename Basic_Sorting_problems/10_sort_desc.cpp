/* 10. Sort array in descending order using basic sorting. */

#include <iostream>
#include <vector>
using namespace std;

void sortDesc(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++)
        for(int j=0;j<arr.size()-1-i;j++)
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
}

int main(){
    vector<int> arr={5,2,9,1,5,6};
    sortDesc(arr);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
