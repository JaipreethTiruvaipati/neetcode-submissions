class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(q1.empty()==false){
            auto curr=q1.front();
            q1.pop();
            q2.push(curr);
        }
        swap(q1,q2);
    }
    
    int pop() {
        auto curr=q1.front();
        q1.pop();
        return curr;
    }
    
    int top() {
         auto curr=q1.front();
        //q1.pop();
        return curr;
        
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */