class MinStack {
public:
    //brute force
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        stack<int> tmp;
        int mini=st.top();
        while(st.size())
        {
            tmp.push(st.top());
            mini=min(mini, st.top());
            st.pop();
        }
        while(tmp.size())
        {
            st.push(tmp.top());
            tmp.pop();
        }
        return mini;
        
    }
};
