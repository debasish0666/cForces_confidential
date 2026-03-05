#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        if(n == 1) cout << "NO\n";
        else if(k % 2 == 1) cout << "YES\n";
        else if(n % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}