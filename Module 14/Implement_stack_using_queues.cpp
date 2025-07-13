class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
       queue<int> q2;
       int val;
       while(!q.empty())
       {
           val = q.front();
           q.pop();
           if(q.empty() == true)
               break;
           q2.push(val);
       } 
       q = q2;
       return val;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};