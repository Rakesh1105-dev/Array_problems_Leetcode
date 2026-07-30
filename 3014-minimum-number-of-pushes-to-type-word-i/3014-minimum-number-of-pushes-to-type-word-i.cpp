class Solution {
public:
    int minimumPushes(string word) {
        int totalpushes = 0;
        for(int i=0;i<word.size();i++){
            totalpushes+=(i/8)+1;
        }
        return  totalpushes;
    }
};