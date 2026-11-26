class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        for i,n in enumerate(nums):
            t=target-n
            if t in mp:
                return [mp[t],i]
            mp[n]=i
        