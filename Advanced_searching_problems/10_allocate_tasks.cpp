/* Allocate Tasks/Machines/Jobs Optimally (Binary Search)

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr,int m,int maxLoad){
    int workers=1,sum=0;
    for(int x:arr){
        if(x>maxLoad) return false;
        if(sum+x>maxLoad){ workers++; sum=x; }
        else sum+=x;
        if(workers>m) return false;
    }
    return true;
}

int allocateTasks(vector<int>& arr,int m){
    int l=*max_element(arr.begin(),arr.end()),r=accumulate(arr.begin(),arr.end(),0),ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(isPossible(arr,m,mid)){ ans=mid; r=mid-1; }
        else l=mid+1;
    }
    return ans;
}

int main(){
    vector<int> arr={10,20,30,40}; int m=2;
    cout<<"Minimized Max Load="<<allocateTasks(arr,m)<<endl;
}
