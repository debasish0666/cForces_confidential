#include <bits/stdc++.h>
using namespace std;

int main() {
    string keys;
    cin >> keys;

    int n;
    vector<int> arr;

    while (cin >> n) {
        arr.push_back(n);
    }

    for (int j = 0; j < arr.size(); j++) {

        for (int i = 0; i < keys.size(); i++) {

            int keyValue = (keys[i] - 'A') + 1;
            int result = arr[j] - keyValue;

            if (result >= 1 && result <= 26) {
                cout << char(result + 'A' - 1);
                break;   // First valid key only
            }
        }
    }

    return 0;
}