class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();int low=0; int maxi=0;
        unordered_map<char,int>freq;
        //high ke liye ek for loop:
        for(int high=0;high<n;high++){
            //ab high ko window ki information me add karna hai:-
            freq[s[high]]++;
            //ab window invalid ka hogi:-
            while(freq[s[high]]>1){
                freq[s[low]]--;
                low++;
            }
            maxi=max(maxi,high-low+1);
        }
        return maxi;
    }
};