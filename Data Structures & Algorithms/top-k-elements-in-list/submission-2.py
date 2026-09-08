from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter=Counter(nums)
        heap=[]
        for key,val in counter.items():
            heapq.heappush(heap,(-val,key))
        res=[]
        while k>0:
            val,key=heapq.heappop(heap)
            res.append(key)
            k-=1
        return res

        