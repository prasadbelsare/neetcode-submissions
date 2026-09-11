class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        mp={}
        res_map=defaultdict(int)
        for num in nums1:
            if num not in mp:
                mp[num] = 1
            else:
                mp[num] += 1

        for num in nums2:
            if num in mp:
                res_map[num]+=1
        
        res=[]
        for k,v in res_map.items():
            res.append(k)
        
        return res
