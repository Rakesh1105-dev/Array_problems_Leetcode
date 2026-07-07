class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();int count=0;int prefixcount=0;
        unordered_map<int,int>map;
        map[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                prefixcount++;
            }
            if(map.find(prefixcount-k)!=map.end()){
                count+=map[prefixcount-k];

            }
            map[prefixcount]++;
        }
      return count;
    }
};