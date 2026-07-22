#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<char> myStack;
    string s;
    cin >> s;

    bool valid = true;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == '(') {
            myStack.push(s[i]);
        }

        else if (s[i] == ')') {

            if (myStack.empty()) {
                valid = false;
                break;
            }

            myStack.pop();
        }
    }

    if (valid && myStack.empty())
        cout << "Done, its a valid one";
    else
        cout << "INVALID";
}