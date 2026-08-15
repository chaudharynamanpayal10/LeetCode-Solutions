class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    
    void push(int x) {
        // New element q2 me daalo
        q2.push(x);

        // q1 ke saare elements q2 me transfer karo
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // q1 aur q2 swap
        swap(q1, q2);
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
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