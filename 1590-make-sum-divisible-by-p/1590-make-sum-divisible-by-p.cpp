class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {

        long long totalSum = 0;

        for (int x : nums)
            totalSum += x;

        int targetRem = totalSum % p;

        if (targetRem == 0)
            return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        long long prefixSum = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            prefixSum += nums[i];

            int currRem = prefixSum % p;

            int requiredRem = (currRem - targetRem + p) % p;

            if (mp.find(requiredRem) != mp.end()) {
                ans = min(ans, i - mp[requiredRem]);
            }

            mp[currRem] = i;
        }

        return (ans == nums.size()) ? -1 : ans;
    }
};