class Solution {
public:
    int findMin(vector<int> &nums) {
        int b=0,e=nums.size()-1;
        while(b<e){
            int mid=(b+e)/2;
            if(nums[mid]<nums[e]){
                e=mid;
            }else{
                b=mid+1;
            }
        }
        return nums[b];

    }
};
