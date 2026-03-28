#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        // Check if all elements are same
        bool all_same = true;
        for(int i = 1; i < n; i++) {
            if(a[i] != a[0]) {
                all_same = false;
                break;
            }
        }

        if(all_same) {
            cout << "NO\n";
            continue;
        }

        // Reverse (descending)
        reverse(a.begin(), a.end());

        // Check if ugly at any point
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == sum) {
                // Fix by swapping with last
                swap(a[i], a[n-1]);
            }
            sum += a[i];
        }

        cout << "YES\n";
        for(int x : a) cout << x << " ";
        cout << "\n";
    }
}