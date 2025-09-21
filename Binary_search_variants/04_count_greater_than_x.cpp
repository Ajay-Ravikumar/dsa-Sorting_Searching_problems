/* Number of Elements > X */

#include <iostream>
#include <vector>
using namespace std;

int countGreaterThanX(vector<int>& arr, int x) {
    int l = 0, r = arr.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) l = mid + 1;
        else r = mid;
    }
    return arr.size() - l;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 7};
    int x = 4;
    cout << "Count > " << x << " = " << countGreaterThanX(arr, x) << endl;
}
