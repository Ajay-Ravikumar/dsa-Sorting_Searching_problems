/* Sort Intervals by Start Time */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr={2,5,2,8,5,6,8,8};
    unordered_map<int,int> freq;
    for(int x:arr) freq[x]++;
    sort(arr.begin(),arr.end(),[&](int a,int b){
        if(freq[a]==freq[b]) return a<b;
        return freq[a]>freq[b];
    });
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}
