class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();int count=0;int prefixsum=0;
        unordered_map<int ,int>freq;
        freq[0]=1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
             if(freq.find(prefixsum-goal)!=freq.end()){
                count+=freq[prefixsum-goal];
             }
             freq[prefixsum]++;
        }
        return count;
    }
};