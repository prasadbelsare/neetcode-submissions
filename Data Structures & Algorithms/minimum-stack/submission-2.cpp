class MinStack {
public:
    MinStack() {
        
    }
    stack<int> st1;
    stack<int> st2;
    void push(int val) {
        st1.push(val);
        int minNum=min(val,st2.empty()?val:st2.top());
        st2.push(minNum);
    }
    
    void pop() {
        st1.pop();
        st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
