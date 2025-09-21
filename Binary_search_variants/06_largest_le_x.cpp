/* Largest Element ≤ X */

#include <iostream>
#include <vector>
using namespace std;

int largestLE(vector<int>& arr, int x) {
    int l = 0, r = arr.size()-1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) { ans = arr[mid]; l = mid + 1; }
        else r = mid - 1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 7};
    int x = 4;
    cout << "Largest <= " << x << ": " << largestLE(arr, x) << endl;
}
