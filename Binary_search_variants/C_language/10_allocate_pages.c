/* Allocate Minimum Pages (Book Allocation Problem) */

#include <stdio.h>

int isPossible(int arr[], int n, int k, int mid) {
    int students = 1, sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) return 0;
        if (sum + arr[i] > mid) {
            students++;
            sum = arr[i];
            if (students > k) return 0;
        } else sum += arr[i];
    }
    return 1;
}

int allocatePages(int arr[], int n, int k) {
    int l = 0, r = 0, ans = -1;
    for (int i = 0; i < n; i++) { r += arr[i]; if (arr[i] > l) l = arr[i]; }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(arr, n, k, mid)) { ans = mid; r = mid - 1; }
        else l = mid + 1;
    }
    return ans;
}

int main() {
    int arr[] = {12, 34, 67, 90};
    int n = 4, k = 2;
    printf("Min Pages: %d\n", allocatePages(arr, n, k));
}
