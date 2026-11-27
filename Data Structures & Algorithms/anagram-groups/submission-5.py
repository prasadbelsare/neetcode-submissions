class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = {}
        for word in strs:
            count = [0] * 26
            for ch in word:
                count[ord(ch) - ord("a")] += 1

            key = tuple(count)

            if key not in mp:
                mp[key] = []

            mp[key].append(word)

        res = []
        for k, v in mp.items():
            res.append(v)

        return res
