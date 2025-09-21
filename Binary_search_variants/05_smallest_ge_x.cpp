/* Smallest Element ≥ X */

#include <iostream>
#include <vector>
using namespace std;

int smallestGE(vector<int>& arr, int x) {
    int l = 0, r = arr.size(), ans = -1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] >= x) { ans = arr[mid]; r = mid; }
        else l = mid + 1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 7};
    int x = 4;
    cout << "Smallest >= " << x << ": " << smallestGE(arr, x) << endl;
}
