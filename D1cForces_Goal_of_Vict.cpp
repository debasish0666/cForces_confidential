/*🪄 (Step-by-step)

Read number of test cases t

For each test case:

Read n

Read n-1 efficiencies

Compute sum

Output negative of sum*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        
        cout << -sum << endl;
    }
    
    return 0;
}