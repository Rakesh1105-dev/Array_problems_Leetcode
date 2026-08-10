class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       int low=0; int high= n-1;
       int maxarea=INT_MIN;
       while(low<high){
        int build=min(height[low],height[high]);
        int width=high-low;
        int area=build*width;
        maxarea=max(area,maxarea);
        if(height[high]>height[low])
            low++;
        
        else
            high--;
        
       }
    return maxarea;
    }
};