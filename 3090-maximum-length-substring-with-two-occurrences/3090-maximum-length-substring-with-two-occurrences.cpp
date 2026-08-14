class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            unordered_map<char,int>map;
            for(int j=i;j<n;j++){
                map[s[j]]++;
                if(map[s[j]]<=2){
                    maxi=max(maxi,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxi;
    }
};