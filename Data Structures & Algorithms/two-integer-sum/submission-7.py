class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        
        for i, n in enumerate(nums):
            temp=target-n
            if temp in mp:
                return [mp[temp],i]
            mp[n]=i
        