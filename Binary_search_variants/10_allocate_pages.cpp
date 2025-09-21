/* Allocate Minimum Pages (Book Allocation Problem) */

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int k, int mid) {
    int students = 1, sum = 0;
    for (int x : arr) {
        if (x > mid) return false;
        if (sum + x > mid) {
            students++;
            sum = x;
            if (students > k) return false;
        } else sum += x;
    }
    return true;
}

int allocatePages(vector<int>& arr, int k) {
    int l = 0, r = 0, ans = -1;
    for (int x : arr) { r += x; if (x > l) l = x; }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(arr, k, mid)) { ans = mid; r = mid - 1; }
        else l = mid + 1;
    }
    return ans;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << "Min Pages: " << allocatePages(arr, k) << endl;
}
