/* Largest Element ≤ X */

#include <stdio.h>

int largestLE(int arr[], int n, int x) {
    int l = 0, r = n-1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) { ans = arr[mid]; l = mid + 1; }
        else r = mid - 1;
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 5, 7};
    int n = 4, x = 4;
    printf("Largest <= %d: %d\n", x, largestLE(arr, n, x));
}
