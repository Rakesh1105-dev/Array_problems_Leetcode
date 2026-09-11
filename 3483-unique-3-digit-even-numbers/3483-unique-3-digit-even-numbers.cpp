class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};

        // Count frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Hundreds digit: 1-9 (cannot be 0)
        for (int i = 1; i <= 9; i++) {
            if (freq[i] == 0) continue;

            freq[i]--;

            // Tens digit: 0-9
            for (int j = 0; j <= 9; j++) {
                if (freq[j] == 0) continue;

                freq[j]--;

                // Units digit must be even
                for (int k = 0; k <= 8; k += 2) {
                    if (freq[k] > 0) {
                        ans++;
                    }
                }

                freq[j]++;
            }

            freq[i]++;
        }

        return ans;
    }
};