class Solution {
public:
 void subset(vector<int>& arr,int index,int n, vector<vector<int> >&ans,vector<int>temp){
    //base condition:-
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //if element ko consider nahi karna hai toh:-
    subset(arr,index+1,n,ans,temp);
    //agar element ko consider karna hai toh:-
    temp.push_back(arr[index]);
    subset(arr,index+1,n,ans,temp);
}
   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> >ans;
        vector<int>temp;
        subset(nums,0,nums.size(),ans,temp);
        return ans;
    }
};