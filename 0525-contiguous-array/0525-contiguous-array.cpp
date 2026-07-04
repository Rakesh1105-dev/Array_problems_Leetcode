class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int countzero=0;int countone=0;
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                countzero++;
            }
            else{
                countone++;
            }
            int diff=countzero-countone;
            if(diff==0){
                maxi=max(maxi,i+1);
                continue;
            }
            if(map.find(diff)==map.end()){
                map[diff]=i;
            }
            else{
                int ind=map[diff];
                int len=i-ind;
                maxi=max(len,maxi);
            }
            
        }
        return maxi;
    }
};