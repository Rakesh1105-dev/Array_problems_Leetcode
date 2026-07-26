class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size(),low=1,high=10000000,mini=-1;
        while(low<=high){
            double totaltime=0;
            int speed=low+(high-low)/2;
            for(int i=0;i<n-1;i++){
                totaltime+= ceil((double)dist[i]/speed);
            }
            totaltime+= (double)dist[n-1]/speed;
            if(totaltime<=hour){
                mini=speed;
                high=speed-1;
            }
            else{
                low=speed+1;
            }
        }
        return mini;
    }
};