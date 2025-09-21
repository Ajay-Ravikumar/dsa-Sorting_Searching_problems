/* Sort Intervals by Start Time */

#include <stdio.h>
#include <stdlib.h>

struct Interval{ int start,end; };

int cmp(const void* a,const void* b){
    struct Interval* x=(struct Interval*)a;
    struct Interval* y=(struct Interval*)b;
    return x->start - y->start;
}

int main(){
    struct Interval arr[]={{5,10},{1,3},{8,12},{2,6}};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(arr[0]),cmp);
    for(int i=0;i<n;i++) printf("[%d,%d] ",arr[i].start,arr[i].end);
    printf("\n");
}
