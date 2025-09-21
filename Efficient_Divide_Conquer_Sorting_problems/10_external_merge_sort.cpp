/* Sort Large Array using External Merge Sort (Conceptual) */

#include <iostream>
using namespace std;

/*
External Merge Sort (Conceptual Steps):
1. Divide large dataset into chunks that fit in memory.
2. Sort each chunk using merge/quick sort in memory.
3. Write sorted chunks back to disk.
4. Use a min-heap (priority queue) for k-way merging.
5. Sequentially write the final merged sorted output.

This example explains the process rather than implementing full I/O.
*/

int main(){
    cout<<"External Merge Sort is a conceptual algorithm."<<endl;
    cout<<"Use chunks -> sort -> write -> k-way merge."<<endl;
    return 0;
}
