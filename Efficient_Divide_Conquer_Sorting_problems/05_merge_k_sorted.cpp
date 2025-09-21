/* Merge K Sorted Arrays */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{ int val,row,col; Node(int v,int r,int c):val(v),row(r),col(c){}; };
struct cmp{ bool operator()(Node a,Node b){ return a.val>b.val; } };

int main(){
    vector<vector<int>> arr={{1,4,7,10},{2,5,8,11},{3,6,9,12}};
    priority_queue<Node,vector<Node>,cmp> pq;
    for(int i=0;i<arr.size();i++) pq.push(Node(arr[i][0],i,0));
    vector<int> output;
    while(!pq.empty()){
        Node curr=pq.top(); pq.pop();
        output.push_back(curr.val);
        if(curr.col+1<arr[0].size()) pq.push(Node(arr[curr.row][curr.col+1],curr.row,curr.col+1));
    }
    for(int x:output) cout<<x<<" ";
    cout<<endl;
}
