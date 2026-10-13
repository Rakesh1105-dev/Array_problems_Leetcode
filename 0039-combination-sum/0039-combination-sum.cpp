class Solution {
public:
void fun(vector<int> &a, int n, int index,vector<int> &diary ,int sum,vector<vector<int>> &res,int target){
    if(index==n){
    if(sum==target)
    res.push_back(diary);
     return;
    }
    fun(a,n,index+1,diary,sum,res,target);
    //jab lena hai:-
    if(a[index]+sum<=target){
        diary.push_back(a[index]);
        sum+=a[index];
        
        fun(a,n,index,diary,sum,res,target);
        diary.pop_back();
        sum-=a[index];
    }
    return;
   
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>diary;
        int n=candidates.size();

     fun(candidates, n, 0, diary, 0, res, target);
     return res;
    }
};