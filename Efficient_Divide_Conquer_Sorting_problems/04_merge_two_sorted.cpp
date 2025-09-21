/* Merge Two Sorted Arrays Without Extra Space */

#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b){
    int n=a.size(), m=b.size();
    for(int i=0;i<n;i++){
        if(a[i]>b[0]){
            swap(a[i],b[0]);
            int first=b[0], k;
            for(k=1;k<m && b[k]<first;k++) b[k-1]=b[k];
            b[k-1]=first;
        }
    }
}

int main(){
    vector<int> a={1,5,9,10,15,20};
    vector<int> b={2,3,8,13};
    mergeArrays(a,b);
    for(int x:a) cout<<x<<" ";
    for(int x:b) cout<<x<<" ";
    cout<<endl;
}
