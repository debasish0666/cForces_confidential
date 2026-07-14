#include <bits/stdc++.h>
using namespace std;

int main() {
    int shift;
    cin >> shift;

    if (shift < 0) {
        cout << "INVALID INPUT";
        return 0;
    }

    shift = shift % 26;

    cin.ignore();          // Remove newline after reading shift
    string s;
    getline(cin, s);       // Read the entire line including spaces

    for (int i = 0; i < s.size(); i++) {

        if (islower(s[i])) {
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';
        }
        else if (isupper(s[i])) {
            s[i] = (s[i] - 'A' + shift) % 26 + 'A';
        }
        else if (isdigit(s[i])) {
            s[i] = (s[i] - '0' + shift) % 10 + '0';
        }
        // Spaces and special characters remain unchanged
    }

    cout << s;

    return 0;
}