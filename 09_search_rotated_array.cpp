#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& arr, int key) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == key) return m;
        if (arr[l] <= arr[m]) {
            if (key >= arr[l] && key < arr[m]) r = m - 1;
            else l = m + 1;
        } else {
            if (key > arr[m] && key <= arr[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << "Rotated Array Search Index = " << searchRotated(arr, 0) << endl;
}
