#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort gas stations
    sort(a.begin(), a.end());

    // Step 2: Distance from 0 → first station
    int maxDist = a[0];

    // Step 3: Distance between consecutive stations
    for (int i = 1; i < n; i++) {
        maxDist = max(maxDist, a[i] - a[i - 1]);
    }

    // Step 4: Last station → x → back (IMPORTANT)
    maxDist = max(maxDist, 2 * (x - a[n - 1]));

    // Output answer
    cout << maxDist << endl;

    return 0;
}