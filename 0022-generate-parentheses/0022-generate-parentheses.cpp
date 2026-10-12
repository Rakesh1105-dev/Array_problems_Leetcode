class Solution {
public:
void fun(int open,int close,int n,string &temp,vector<string> &res){
    if(open==n && close==n){
        res.push_back(temp);
        return;
    }
    //open ka condition:-
    if(open<n){
        temp.push_back('(');
        fun(open+1,close,n,temp,res);
        temp.pop_back();
    }
    //close hone ki condition:-
    if(close<open){
        temp.push_back(')');
        fun(open,close+1,n,temp,res);
        temp.pop_back();
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string> res;
        fun(0,0,n,temp,res);
        return res;
    }
};