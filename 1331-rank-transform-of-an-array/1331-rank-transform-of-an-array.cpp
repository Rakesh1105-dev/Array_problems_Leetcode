class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int rank=1;
        unordered_map<int,int>map;
        for(int i=0;i<temp.size();i++){
            if(map.find(temp[i])==map.end()){
                map[temp[i]]=rank;
                rank++;
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(map[arr[i]]);
        }
        return ans;
    }
};