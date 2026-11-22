class MinStack {
    vector<int> myStack;
    vector<int> minStack;
public:
    MinStack(){}
    
    void push(int val) {
        myStack.push_back(val);
        ptrdiff_t lastIndex = ssize(minStack) - 1;
        if(minStack.empty()){
            minStack.push_back(val);
            return;
        }
        
        if(val < minStack[lastIndex]){
            minStack.push_back(val);
            return;
        }
        minStack.push_back(minStack[lastIndex]);
    }
    
    void pop() {
        myStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return myStack[ssize(myStack) - 1];
    }
    
    int getMin() {
        return minStack[ssize(minStack) - 1];
    }
};
