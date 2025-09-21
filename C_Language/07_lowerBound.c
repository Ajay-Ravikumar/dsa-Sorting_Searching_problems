#include <stdio.h>

int lowerBound(int arr[], int n, int key) {
    int l = 0, r = n;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] < key) l = m + 1;
        else r = m;
    }
    return l;
}

int main() {
    int arr[] = {1, 2, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Lower Bound Index = %d\n", lowerBound(arr, n, 4));
}
