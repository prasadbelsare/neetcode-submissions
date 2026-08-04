class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for ch in s:
            if ch in'({[':
                st.append(ch)
            else:
                if not st:
                    return False
                top = st[-1]
                if (
                    (top == "(" and ch == ")")
                    or (top == "[" and ch == "]")
                    or (top == "{" and ch == "}")
                ):
                    st.pop()
                else:
                    return False

        return len(st) == 0
