#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int maxLen = 1, current = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                current++;
            } else {
                current = 1;
            }
            maxLen = max(maxLen, current);
        }

        cout << maxLen + 1 << endl;
    }

    return 0;
}