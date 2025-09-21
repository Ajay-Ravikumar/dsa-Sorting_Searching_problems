/* Merge K Sorted Arrays */

#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){ return a<b?a:b; }

void mergeKSorted(int arr[][4], int k, int n){ 
    int output[k*n], idx=0;
    int pointers[k]; for(int i=0;i<k;i++) pointers[i]=0;
    for(int i=0;i<k*n;i++){
        int minVal=__INT_MAX__, minIdx=-1;
        for(int j=0;j<k;j++){
            if(pointers[j]<n && arr[j][pointers[j]]<minVal){
                minVal=arr[j][pointers[j]]; minIdx=j;
            }
        }
        output[idx++]=minVal; pointers[minIdx]++;
    }
    for(int i=0;i<idx;i++) printf("%d ",output[i]);
    printf("\n");
}

int main(){
    int arr[3][4]={{1,4,7,10},{2,5,8,11},{3,6,9,12}};
    mergeKSorted(arr,3,4);
}
