class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp1={}
        mp2={}
        for ch in s:
            mp1[ch]=1+mp1.get(ch,0)
        for ch in t:
            mp2[ch]=1+mp2.get(ch,0)
        return mp1==mp2
        