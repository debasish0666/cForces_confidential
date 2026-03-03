#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        // Check if already not sorted
        bool sorted = true;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if(!sorted) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = LLONG_MAX;

        // Find minimum operations needed among all adjacent pairs
        for(int i = 0; i < n - 1; i++) {
            long long diff = a[i + 1] - a[i];
            long long ops = diff / 2 + 1;
            ans = min(ans, ops);
        }

        cout << ans << "\n";
    }

    return 0;
}