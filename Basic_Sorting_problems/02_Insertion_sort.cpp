/* 2. Insertion Sort an array. */

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i], j = i-1;
        while (j >= 0 && arr[j] > key) { arr[j+1] = arr[j]; j--; }
        arr[j+1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    insertionSort(arr);
    for(int x: arr) cout << x << " ";
    cout << endl;
}

