/* Sort Large Array using External Merge Sort (Conceptual) */

#include <stdio.h>

/*
External Merge Sort (Conceptual Steps):
1. Break large file/array into manageable chunks that fit in memory.
2. Sort each chunk using in-memory sorting (like quicksort/merge sort).
3. Write each sorted chunk back to disk.
4. Use a k-way merge algorithm (like priority queue) to merge all chunks.
5. Output the fully sorted data.

This file provides algorithm steps only, as actual implementation
needs file handling with disk I/O.
*/

int main(){
    printf("External Merge Sort is a conceptual algorithm.\n");
    printf("Use chunks -> sort -> write -> k-way merge.\n");
    return 0;
}
