/* Search in Infinite Sorted Array (Conceptual Implementation) */

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int searchInfinite(int arr[], int x) {
    int l = 0, r = 1;
    while (arr[r] < x) {
        l = r;
        r *= 2;
    }
    return binarySearch(arr, l, r, x);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,10,12,15,18,21,25,30};
    int x = 15;
    printf("Index: %d\n", searchInfinite(arr, x));
}
