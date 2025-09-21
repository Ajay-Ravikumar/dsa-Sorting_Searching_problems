/* 5. Sort nearly sorted / k-sorted array. */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void sortKSorted(vector<int>& arr,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    int n=arr.size();
    for(int i=0;i<=k && i<n;i++) pq.push(arr[i]);
    int index=0;
    for(int i=k+1;i<n;i++){
        arr[index++]=pq.top(); pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){ arr[index++]=pq.top(); pq.pop(); }
}

int main(){
    vector<int> arr={6,5,3,2,8,10,9}; int k=3;
    sortKSorted(arr,k);
    for(int x:arr) cout << x << " ";
    cout << endl;
}
