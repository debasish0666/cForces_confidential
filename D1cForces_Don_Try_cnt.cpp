#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int count = 0;

        while (count <= 7) {
            if (x.find(s) != string::npos) {
                cout << count << endl;
                break;
            }
            x += x;
            count++;
        }

        if (count > 7) cout << -1 << endl;
    }
}