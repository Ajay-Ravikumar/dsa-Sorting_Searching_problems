/* Number of Elements < X */

#include <iostream>
#include <vector>
using namespace std;

int countLessThanX(vector<int>& arr, int x) {
    int l = 0, r = arr.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 7};
    int x = 5;
    cout << "Count < " << x << " = " << countLessThanX(arr, x) << endl;
}
