/* Smallest Element ≥ X */

#include <stdio.h>

int smallestGE(int arr[], int n, int x) {
    int l = 0, r = n, ans = -1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= x) { ans = arr[mid]; r = mid; }
        else l = mid + 1;
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 5, 7};
    int n = 4, x = 4;
    printf("Smallest >= %d: %d\n", x, smallestGE(arr, n, x));
}
