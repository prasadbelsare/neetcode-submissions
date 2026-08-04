class Solution:
    def calPoints(self, operations: List[str]) -> int:
        st = []
        for o in operations:
            if o == "+":
                st.append(st[-1] + st[-2])
            elif o == "C":
                st.pop()
            elif o == "D":
                st.append(2*st[-1])
            else:
                st.append(int(o))
        return sum(st)

