class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st=[]

        for ch in tokens:
            if ch=='+':
                num1=st[-1]
                st.pop()
                num2=st[-1]
                st.pop()
                st.append(num1+num2)
            elif ch=='-':
                num1=st.pop()
                num2=st.pop()
                st.append(num2-num1)
            elif ch=='*':
                num1=st.pop()
                num2=st.pop()
                st.append(num1*num2)
            elif ch=='/':
                num1=st.pop()
                num2=st.pop()
                st.append(int(float(num2) / num1))
            else:
                st.append(int(ch))
        return st[0]            
            