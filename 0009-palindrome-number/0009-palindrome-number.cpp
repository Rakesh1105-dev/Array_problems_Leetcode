class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
    int num=x,sum=0,rem;
    while (num){
        rem=num%10;
        num=num/10;
        if(sum>INT_MAX/10)
        return false;
        sum=sum*10+rem;
    }
    if(sum==x)
    return true;
    else
    return false;
    }
    
};