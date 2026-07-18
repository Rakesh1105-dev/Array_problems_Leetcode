class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end=nums.size()-1;int start=0;int mid;
        int index=nums.size();
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                index=mid;
                end=mid-1;
            }
        }
        return index;
    }
};