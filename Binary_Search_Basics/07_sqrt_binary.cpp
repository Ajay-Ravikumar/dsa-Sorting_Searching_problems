/* Sqaure Root using Binary Search */

#include <iostream>
using namespace std;

int mySqrt(int x){
    int l=0,r=x,ans=0;
    while(l<=r){
        long mid=l+(r-l)/2;
        if(mid*mid<=x){ ans=mid; l=mid+1; }
        else r=mid-1;
    }
    return ans;
}

int main(){
    int x=17;
    cout<<"Sqrt: "<<mySqrt(x)<<endl;
}
