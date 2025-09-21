/* Number of elements < X */

#include <stdio.h>

int countLessThanX(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}

int main() {
    int arr[] = {1, 2, 4, 5, 7};
    int n = 5, x = 5;
    printf("Count < %d = %d\n", x, countLessThanX(arr, n, x));
}
