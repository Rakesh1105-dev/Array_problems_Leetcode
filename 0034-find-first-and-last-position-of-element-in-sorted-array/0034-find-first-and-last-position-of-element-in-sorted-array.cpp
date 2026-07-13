class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(), first=-1;int second=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                first=i;
                break;
            }
            else{
                continue;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                second=j;
                break;
            }
            else{
                continue;
            }
        }
        vector<int>ans(2);
        ans[0]=first;
        ans[1]=second;
        return ans;
}
};