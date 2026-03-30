class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>prefix(height.size());
        vector<int>suffix(height.size());
        int preMx=0;
        int suffMx=0;
        for(int i=0;i<height.size();i++){
            preMx=max(height[i],preMx);
            prefix[i]=preMx;
        }
        for(int i=height.size()-1;i>=0;i--){
            suffMx=max(height[i],suffMx);
            suffix[i]=suffMx;
        }
        int trapWater=0;
        for(int i=0;i<height.size();i++){
            trapWater+=min(prefix[i],suffix[i])-height[i];
        }
        return trapWater;
    }
};
