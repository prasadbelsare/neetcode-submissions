class Solution:
    def trap(self, height: List[int]) -> int:
        water=0
        l,r=0,len(height)-1
        l_max=height[l]
        r_max=height[r]

        while l<r:
            if height[l]<=height[r]:
                water+=l_max-height[l]
                l+=1
                l_max=max(height[l],l_max)
            else:
                water+=r_max-height[r]
                r-=1
                r_max=max(height[r],r_max)
        return water    
        