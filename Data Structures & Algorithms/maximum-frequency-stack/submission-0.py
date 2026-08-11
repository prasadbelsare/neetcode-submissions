from collections import defaultdict


class FreqStack:
    def __init__(self):
        self.freqMap = defaultdict(int)
        self.grpMap = defaultdict(list)
        self.maxFreq = 0

    def push(self, val: int) -> None:
        self.freqMap[val] += 1
        self.maxFreq = max(self.maxFreq, self.freqMap[val])
        self.grpMap[self.freqMap[val]].append(val)

    def pop(self) -> int:
        num = self.grpMap[self.maxFreq].pop()
        if not self.grpMap[self.maxFreq]:
            self.maxFreq -= 1
        self.freqMap[num] -= 1
        return num


# Your FreqStack object will be instantiated and called as such:
# obj = FreqStack()
# obj.push(val)
# param_2 = obj.pop()
