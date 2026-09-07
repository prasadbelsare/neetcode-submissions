class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        stones = [-s for s in stones]
        heapq.heapify(stones)

        while len(stones)>1:
            f=heapq.heappop(stones)
            s=heapq.heappop(stones)
            if s>f:
                heapq.heappush(stones,f-s)
            
        return 0 if len(stones)==0 else abs(stones[0])   


        


        