class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        n = len(nums)
        leftSum = [0] * n
        rightSum = [0] * n
        res=-1
        tempSum=0
        for i in range(1, n):
            tempSum+=nums[i-1]
            leftSum[i] = tempSum
        
        tempSum=0
        for i in range(n - 2, -1, -1):
            tempSum+=nums[i + 1]
            rightSum[i] = tempSum
        
        for i in range(n):
            if rightSum[i]==leftSum[i]:
                res=i
                break
        return res

