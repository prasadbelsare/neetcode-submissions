class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        int lMax=0;
        int res=0;
        for(int i=0;i<n;i++){
            lMax=max(height[i],lMax);
            prefix[i]=lMax;
            
        }

        int rMax=0;
        for(int i=n-1;i>=0;i--){
            rMax=max(height[i],rMax);
            suffix[i]=rMax;
        }
        
        for(int i=0;i<n;i++){
            int water=min(prefix[i],suffix[i])-height[i];
            if(water>0){
                res+=water;
            }
        }
        return res;
    }
};
