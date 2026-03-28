#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Check for "..."
        if(s.find("...") != string::npos) {
            cout << 2 << endl;
        } else {
            // count dots
            int cnt = 0;
            for(char c : s) {
                if(c == '.') cnt++;
            }
            cout << cnt << endl;
        }
    }
}