#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6};
    auto it = lower_bound(arr.begin(), arr.end(), 4);
    cout << "Lower Bound Index = " << (it - arr.begin()) << endl;
}
