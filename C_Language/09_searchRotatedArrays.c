#include <stdio.h>

int searchRotated(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == key) return m;
        if (arr[l] <= arr[m]) { // left sorted
            if (key >= arr[l] && key < arr[m]) r = m - 1;
            else l = m + 1;
        } else { // right sorted
            if (key > arr[m] && key <= arr[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Rotated Array Search Index = %d\n", searchRotated(arr, n, 0));
}
