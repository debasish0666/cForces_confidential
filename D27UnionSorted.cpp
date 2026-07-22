#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,2,2,3,4};
    vector<int> arrs = {2,3,5,6};

    unordered_set<int> st;
    vector<int> Unified;

    // Insert elements of first array
    for (auto num : nums) {
        st.insert(num);
    }

    // Insert elements of second array
    for (auto arr : arrs) {
        st.insert(arr);   // insert() automatically ignores duplicates
    }

    // Copy set elements to vector
    for (auto it : st) {
        Unified.push_back(it);
    }

    // Since unordered_set doesn't maintain order
    sort(Unified.begin(), Unified.end());

    // Print result
    for (auto x : Unified) {
        cout << x << " ";
    }

    return 0;
}