class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if digits == "":
            return []
        combinations = [""]
        d = {
            "2": ["a", "b", "c"],
            "3": ["d", "e", "f"],
            "4": ["g", "h", "i"],
            "5": ["j", "k", "l"],
            "6": ["m", "n", "o"],
            "7": ["p", "q", "r", "s"],
            "8": ["t", "u", "v"],
            "9": ["w", "x", "y", "z"],
        }

        for digit in digits:
            new_comb=[]
            for letter in d[digit]:
               for comb in combinations:
                new_comb.append(comb+letter)
            combinations=new_comb
        return combinations 
