/* Sort Array by Frequency of Elements */

#include <stdio.h>
#include <stdlib.h>

struct Pair{ int val,freq; };

int cmp(const void* a,const void* b){
    struct Pair* x=(struct Pair*)a;
    struct Pair* y=(struct Pair*)b;
    if(y->freq==x->freq) return x->val - y->val;
    return y->freq - x->freq;
}

int main(){
    int arr[]={2,5,2,8,5,6,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct Pair map[1000]; int used[1000]={0}, k=0;

    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<k;j++){
            if(map[j].val==arr[i]){ map[j].freq++; found=1; break; }
        }
        if(!found){ map[k].val=arr[i]; map[k].freq=1; k++; }
    }

    qsort(map,k,sizeof(map[0]),cmp);
    for(int i=0;i<k;i++) for(int j=0;j<map[i].freq;j++) printf("%d ",map[i].val);
    printf("\n");
}
