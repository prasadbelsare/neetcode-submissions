class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        currWhite=blocks[:k].count('W')
        minWhites=currWhite

        for i in range (k,len(blocks)):
            if blocks[i]=='W':
                currWhite+=1
            if blocks[i-k]=='W':
                currWhite-=1
            
            minWhites=min(currWhite,minWhites)
        return minWhites                
        