class Solution {
public:
    int trap(vector<int>& height) {
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
