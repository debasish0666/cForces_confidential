#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    int n = arr.size();

    if (n == 0) return 0;

    d = d % n;

    vector<int> temp(d);

    // Store first d elements
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy temp to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}