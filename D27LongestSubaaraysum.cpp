class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        int sum = 0;
        int maxLen = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            // If entire subarray from 0 to i has sum k
            if(sum == k) {
                maxLen = i + 1;
            }

            // Check if we have seen sum-k before
            int remainder = sum-k;
            if(mp.find(remainder) != mp.end()) {
                maxLen = max(maxLen, i - mp[remainder]);
            }

            // Store first occurrence only
            if(mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }

        return maxLen;
    }
};