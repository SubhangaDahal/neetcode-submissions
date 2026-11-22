class MinStack {
    vector<int> myStack;
    vector<int> minStack;
public:
    MinStack(){}
    
    void push(int val) {
        myStack.push_back(val);
        if(minStack.empty()){
            minStack.push_back(val);
            return;
        }
        ptrdiff_t lastIndex = ssize(minStack) - 1;
        minStack.push_back(min(val,minStack[lastIndex]));
    }
    
    void pop() {
        myStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return myStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
