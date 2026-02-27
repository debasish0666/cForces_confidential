#include <bits/stdc++.h>
using namespace std;

bool canSort(vector<int> a) {
    int n = a.size();
    bool changed = true;

    // keep swapping peaks until no more swaps
    while(changed) {
        changed = false;
        for(int i = 1; i < n-1; i++) {
            if(a[i-1] < a[i] && a[i] > a[i+1]) {
                swap(a[i], a[i+1]);
                changed = true;
            }
        }
    }

    // check if array is sorted
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(canSort(a)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}