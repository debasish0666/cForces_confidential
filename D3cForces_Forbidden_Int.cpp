#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        // Case 1: If 1 is allowed
        if(x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for(int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << "\n";
        }
        else {
            // Now 1 is forbidden
            
            // If only number available was 1
            if(k == 1) {
                cout << "NO\n";
            }
            else {
                // If n is even → use only 2
                if(n % 2 == 0) {
                    cout << "YES\n";
                    cout << n / 2 << "\n";
                    for(int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << "\n";
                }
                else {
                    // n is odd
                    
                    // If k >= 3 → use one 3 and rest 2
                    if(k >= 3) {
                        cout << "YES\n";
                        cout << (n - 3) / 2 + 1 << "\n";
                        cout << 3 << " ";
                        for(int i = 0; i < (n - 3) / 2; i++)
                            cout << 2 << " ";
                        cout << "\n";
                    }
                    else {
                        // k == 2 and n is odd
                        cout << "NO\n";
                    }
                }
            }
        }
    }

    return 0;
}