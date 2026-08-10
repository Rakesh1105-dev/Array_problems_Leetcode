class Solution {
    public:int findDuplicate(vector<int>& nums) {
        int n=nums.size();
      int slow=nums[0],fast=nums[0];
      while(true){
        //slow ko ek step badana hai and fast ko 2 step badhna hai.
        slow=nums[slow];
        fast=nums[fast];
        fast=nums[fast];
        if(slow==fast)
            break;
        
      }
            slow=nums[0];
            while(slow!=fast){
                slow=nums[slow];
                fast=nums[fast];
            }
        
        
      
      return slow;
    }
};