class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l,r=0,len(nums)-1
        res=[-1,-1]
        while l<=r:
            m=l+(r-l)//2   
            if nums[m]>=target:
                r=m-1
            else:
                l=m+1
            if nums[m]==target:
                res[0]=m

        l,r=0,len(nums)-1
        while l<=r:
            m=l+(r-l)//2 
            if nums[m]<=target:
                l=m+1
            else:
                r=m-1
            if nums[m]==target:
                res[1]=m
        
        return res    