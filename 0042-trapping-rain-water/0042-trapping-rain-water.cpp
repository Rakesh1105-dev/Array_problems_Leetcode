class Solution {
public:
    int trap(vector<int>& height) {
         //height ka size ko nikalte hai:-
         int n=height.size();
         int leftmax=0; int rightmax=0,maxheight=height[0],index=0,water=0;
         //maxium height of the building:
         for(int i=1;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
         }
         //ab karenege left part ko solve:
         for(int i=0;i<index;i++){
            if(leftmax>height[i])
            water+=leftmax-height[i];
            else
            leftmax=height[i];
         }
         //now ab hum solve karenge right part ko:
         for(int i=n-1;i>index;i--){
            if(rightmax>height[i])
            water+=rightmax-height[i];
            else
            rightmax=height[i];
         }
        return water;
    }
};