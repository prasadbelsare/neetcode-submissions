class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int l=0;
        int r=n-1;
        int maxArea=0;
        while(l<r){
            int currArea=(r-l)*min(heights[l],heights[r]);
            maxArea=max(currArea,maxArea);
            heights[l] < heights[r] ? l++ : r--;
        }
        return maxArea;

    }
};
