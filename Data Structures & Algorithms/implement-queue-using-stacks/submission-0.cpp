class MyQueue {
public:
    stack<int>st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
            while(st1.empty()==false){
                auto curr=st1.top();
                st1.pop();
                st2.push(curr);
            }
        }
        auto curr=st2.top();
            st2.pop();
            return curr;
    }
    
    int peek() {
        if(st2.empty()){
            while(st1.empty()==false){
                auto curr=st1.top();
                st1.pop();
                st2.push(curr);
            }
        }
        auto curr=st2.top();
           // st2.pop();
            return curr;
    }
    
    bool empty() {
        if(st1.empty()and st2.empty())return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */