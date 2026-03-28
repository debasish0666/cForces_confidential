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

        int ops = 0;
        int cnt = 1;

        for(int i = 1; i < n; i++) {
            if((a[i] % 2) == (a[i-1] % 2)) {
                cnt++;
            } else {
                ops += (cnt - 1);
                cnt = 1;
            }
        }

        ops += (cnt - 1); // last block

        cout << ops << endl;
    }
}