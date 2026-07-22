#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {

    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {

        if (a[i] <= b[j]) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        else {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}

int main() {

    vector<int> a = {1,1,2,3,4};
    vector<int> b = {2,3,4,5,6};

    vector<int> ans = findUnion(a, b);

    for (int x : ans)
        cout << x << " ";

    return 0;
}