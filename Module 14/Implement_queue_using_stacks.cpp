class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st2;
        int val;
        while(!st.empty())
        {
            val = st.top();
            st.pop();
            if(st.empty() == true)
                break;
            st2.push(val);
        }
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    int peek() {
        stack<int> st2;
        int val;
        while(!st.empty())
        {
            val = st.top();
            st.pop();
            st2.push(val);
        }
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    bool empty() {
        return st.empty();
    }
};