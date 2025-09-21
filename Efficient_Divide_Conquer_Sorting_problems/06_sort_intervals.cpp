/* Sort Intervals by Start Time */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval{ int start,end; };

int main(){
    vector<Interval> arr={{5,10},{1,3},{8,12},{2,6}};
    sort(arr.begin(),arr.end(),[](Interval a,Interval b){ return a.start<b.start; });
    for(auto x:arr) cout<<"["<<x.start<<","<<x.end<<"] ";
    cout<<endl;
}
