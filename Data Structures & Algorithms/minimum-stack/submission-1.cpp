class MinStack {

private:
stack<long long> stk;
long long mini;
public:
    MinStack() {
       
    }
    
    void push(int value) {
        if(stk.empty()){
            stk.push(value);
            mini = value;
        }
        else{
            if(value>=mini)stk.push(value);
            else{
                stk.push(2LL*value-mini);
                mini = value;
            }
        }
    }
    
    void pop() {
        long long x = stk.top();
        stk.pop();
        if(x<mini){
            mini = 2LL*mini - x;
        }
    }
    
    int top() {
        if(stk.top()<mini)return mini;
        else return stk.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your miniStack object will be instantiated and called as such:
 * miniStack* obj = new miniStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getmini();
 */