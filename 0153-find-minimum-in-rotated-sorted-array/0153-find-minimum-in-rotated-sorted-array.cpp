class Solution {
public:
    int findMin(vector<int>& nums) {
        int  temp=nums[0],start=0,end=nums.size()-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            //left side of the array is sorted
            if(nums[0]<=nums[mid]){
               start=mid+1;
            }
            //right side of the array is sorted.
            else{
                temp=nums[mid];
                end=mid-1;

            }
            
        }
           return temp;
    }
};