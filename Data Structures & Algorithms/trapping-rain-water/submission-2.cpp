class Solution {
public:
    int trap(vector<int>& height) {
        // vector<int>prefix(height.size());
        // vector<int>suffix(height.size());
        // int preMx=0;
        // int suffMx=0;
        // for(int i=0;i<height.size();i++){
        //     preMx=max(height[i],preMx);
        //     prefix[i]=preMx;
        // }
        // for(int i=height.size()-1;i>=0;i--){
        //     suffMx=max(height[i],suffMx);
        //     suffix[i]=suffMx;
        // }
        // int trapWater=0;
        // for(int i=0;i<height.size();i++){
        //     trapWater+=min(prefix[i],suffix[i])-height[i];
        // }
        // return trapWater;

        int left=0;
        int right=height.size()-1;
        int leftMax=height[left];
        int rightMax=height[right];
        int waterTrapped=0;
        
        while(left<right){
            if(leftMax<rightMax){
                waterTrapped+=leftMax-height[left];
                left++;
                leftMax=max(height[left],leftMax);
            }else{
                waterTrapped+=rightMax-height[right];
                right--;
                rightMax=max(height[right],rightMax);
            }
        }
        return waterTrapped;
    }
};
