class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> next(k, 0);

            // Case 1: Start a new subarray with num
            next[num % k]++;

            // Case 2: Extend all previous subarrays
            for (int r = 0; r < k; r++) {
                if (dp[r] > 0) {
                    int newRemainder = (r * (num % k)) % k;

                    next[newRemainder] += dp[r];
                }
            }

            // Add the counts of subarrays ending here
            for (int r = 0; r < k; r++) {
                ans[r] += next[r];
            }

            // Update DP for the next iteration
            dp = next;
        }

        return ans;
    }
};