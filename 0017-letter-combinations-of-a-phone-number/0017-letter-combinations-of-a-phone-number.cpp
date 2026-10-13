class Solution {
public:
unordered_map<char,string>f;

void fun(string &s,int n,int index,string &diary,vector<string> &res){
    if(index==n){
        res.push_back(diary);
        return;
    }
    string choice=f[s[index]];
    for(int i=0;i<choice.size();i++){
        diary.push_back(choice[i]);
        fun(s,n,index+1,diary,res);
        diary.pop_back();
    }
    return;
}
 vector<string> letterCombinations(string digits) {
      f['2']="abc";
       f['3']="def";
      f['4']="ghi";
      f['5']="jkl";
      f['6']="mno";
      f['7']="pqrs";
      f['8']="tuv";
      f['9']="wxyz";
      
   vector<string>res;
   int n=digits.size();
   string diary="";
   fun(digits,n,0,diary,res);
   return res;

    }
};