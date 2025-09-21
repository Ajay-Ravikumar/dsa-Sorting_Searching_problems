#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr,int l,int r) {
    int pivot=arr[r], i=l-1;
    for(int j=l;j<r;j++) if(arr[j]<=pivot) swap(arr[++i],arr[j]);
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(vector<int>& arr,int l,int r) {
    if(l<r) {
        int pi=partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main() {
    vector<int> arr={5,2,9,1,5,6};
    quickSort(arr,0,arr.size()-1);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
