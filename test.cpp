#include <bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int>& arr) {
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int x : arr) {
        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second && x < first) {
            third = second;
            second = x;
        }
        else if (x > third && x < second && x < first) {
            third = x;
        }
    }

    return (third == LLONG_MIN) ? -1 : (int)third;
}

int main() {
    vector<int> arr = {5, 4, 3, 5, 4};
    cout << thirdLargest(arr);
}