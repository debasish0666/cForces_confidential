#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {3, 0, 1};

    int n = nums.size();

    for (int i = 0; i <= n; i++) {

        bool found = false;

        for (int j = 0; j < n; j++) {

            if (nums[j] == i) {
                found = true;
                break;   // exits only inner loop
            }
        }

        if (!found) {
            cout << "Missing number is: " << i;
            return 0;
        }
    }

    return 0;
}