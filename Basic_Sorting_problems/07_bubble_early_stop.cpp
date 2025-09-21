/* 7. Implement Bubble Sort with early stopping optimization. */

#include <iostream>
#include <vector>
using namespace std;

void bubbleSortEarly(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        bool swapped=false;
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]) { swap(arr[j],arr[j+1]); swapped=true; }
        }
        if(!swapped) break;
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    bubbleSortEarly(arr);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
