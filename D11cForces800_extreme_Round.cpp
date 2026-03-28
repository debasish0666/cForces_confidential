#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string s = to_string(n);

        int len = s.size();            // number of digits
        int first_digit = s[0] - '0';  // first digit

        int ans = (len - 1) * 9 + first_digit;

        cout << ans << endl;
    }
}