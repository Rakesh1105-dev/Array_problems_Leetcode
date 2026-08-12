class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int low=0;int maxlength=0;
        for(int high=0;high<n;high++){
            mp[nums[high]]++;
        
        while(mp[nums[high]]>k){
            mp[nums[low]]--;
            low++;
        }
        maxlength=max(maxlength,high-low+1);
        }
        return maxlength;
    }
};