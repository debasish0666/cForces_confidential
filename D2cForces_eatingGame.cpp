#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[10];
        int mx = 0;

        // find max
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > mx) mx = a[i];
        }

        // count max
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == mx) count++;
        }

        cout << count << endl;
    }

    return 0;
}