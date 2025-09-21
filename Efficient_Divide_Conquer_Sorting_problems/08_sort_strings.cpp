/* Sort Strings Lexicographically */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> arr={"banana","apple","cherry","date"};
    sort(arr.begin(),arr.end());
    for(auto &s:arr) cout<<s<<" ";
    cout<<endl;
}
