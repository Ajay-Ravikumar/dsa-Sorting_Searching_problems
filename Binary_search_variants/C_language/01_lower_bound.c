/* Lower bound implementation */

#include <stdio.h>

int lowerBound(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}

int main() {
    int arr[] = {1, 2, 4, 4, 5, 7};
    int n = 6, x = 4;
    printf("Lower Bound Index: %d\n", lowerBound(arr, n, x));
}
