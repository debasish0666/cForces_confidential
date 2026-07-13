#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int L;
    cin >> L;

    int maxAqua = 0;

    for (int i = 0; i < s.size(); i += L) {

        int aqua = 0;

        for (int j = i; j < i + L && j < s.size(); j++) {

            if (s[j] == 'a')
                aqua++;
        }

        if (aqua > maxAqua)
            maxAqua = aqua;
    }

    cout << maxAqua;

    return 0;
}