/* Sort Strings Lexicographically */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a,const void* b){
    return strcmp(*(const char**)a, *(const char**)b);
}

int main(){
    const char* arr[]={"banana","apple","cherry","date"};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(char*),cmp);
    for(int i=0;i<n;i++) printf("%s ",arr[i]);
    printf("\n");
}
