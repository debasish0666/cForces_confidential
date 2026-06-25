class Solution {
public:
    long long countPairs(vector<int>& a, vector<int>& b) {
        int n = a.size();

        vector<int> diff(n);

        for (int i = 0; i < n; i++) {
            diff[i] = a[i] - b[i];
        }

        sort(diff.begin(), diff.end());

        long long count = 0;

        int l = 0;
        int r = n - 1;

        while (l < r) {
            if (diff[l] + diff[r] > 0) {
                count += (r - l);
                r--;
            } else {
                l++;
            }
        }

        return count;
    }
};