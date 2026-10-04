class Solution {
public:
    int fib(int n) {
        if(n<=1){ //base condition to stop the series
            return n;
        }
         return fib(n-1)+fib(n-2);
    }
};