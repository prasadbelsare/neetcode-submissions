class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stack.push(i);
            } else if (s[i] == ')') {
                if (!stack.empty()) {
                    stack.pop();
                } else {
                    s[i] = '\0';
                }
            }
        }

        while (!stack.empty()) {
            s[stack.top()] = '\0';
            stack.pop();
        }

        string result;
        for (char& c : s) {
            if (c != '\0') {
                result += c;
            }
        }
        return result;
    }
};