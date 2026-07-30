class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for(int w : weights)
            high += w;

        int ans = high;

        while(low <= high)
        {
            int capacity = low + (high - low) / 2;

            int daysRequired = 1;
            int currentLoad = 0;

            for(int i = 0; i < weights.size(); i++)
            {
                if(currentLoad + weights[i] <= capacity)
                {
                    currentLoad += weights[i];
                }
                else
                {
                    daysRequired++;
                    currentLoad = weights[i];
                }
            }

            if(daysRequired <= days)
            {
                ans = capacity;
                high = capacity - 1;
            }
            else
            {
                low = capacity + 1;
            }
        }

        return ans;
    }
};