class MyQueue {
public:
    stack<int> main;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        main.push(x);
    }
    
    int pop() {
        while(!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
        int ans = helper.top();
        helper.pop();
        
        while(!helper.empty()) {
            main.push(helper.top());
            helper.pop();
        }
        
        return ans;
    }
    
    int peek() {
        while(!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
        int ans = helper.top();
        
        while(!helper.empty()) {
            main.push(helper.top());
            helper.pop();
        }
        
        return ans;
    }
    
    bool empty() {
        return main.empty();
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