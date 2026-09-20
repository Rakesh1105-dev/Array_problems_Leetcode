class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int reversePosition = 'z' - s[i] + 1;
            int stringPosition = i + 1;

            sum += reversePosition * stringPosition;
        }

        return sum;
    }
};