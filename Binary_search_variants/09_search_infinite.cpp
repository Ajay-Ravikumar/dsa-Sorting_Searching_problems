/* Search in Infinite Sorted Array (Conceptual Implementation) */

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int searchInfinite(vector<int>& arr, int x) {
    int l = 0, r = 1;
    while (r < arr.size() && arr[r] < x) {
        l = r;
        r *= 2;
    }
    if (r >= arr.size()) r = arr.size()-1;
    return binarySearch(arr, l, r, x);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,10,12,15,18,21,25,30};
    int x = 15;
    cout << "Index: " << searchInfinite(arr, x) << endl;
}
