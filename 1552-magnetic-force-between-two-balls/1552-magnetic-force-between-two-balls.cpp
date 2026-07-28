class Solution {
public:
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int n = position.size();

        int low = 1;
        int high = position[n - 1] - position[0];

        int ans = -1;

        while(low <= high)
        {
            int guessDistance = low + (high - low) / 2;

            int ballsPlaced = 1;
            int lastPlaced = position[0];

            for(int i = 1; i < n; i++)
            {
                if(position[i] - lastPlaced >= guessDistance)
                {
                    ballsPlaced++;
                    lastPlaced = position[i];
                }
            }

            if(ballsPlaced >= m)
            {
                ans = guessDistance;
                low = guessDistance + 1;
            }
            else
            {
                high = guessDistance - 1;
            }
        }

        return ans;
    }
};