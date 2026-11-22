class MinStack {
    vector<int> myStack;
    vector<int> minStack;
    int topPtr;
public:
    MinStack(): topPtr {-1}{}
    
    void push(int val) {
        myStack.push_back(val);
        topPtr++;
        if(topPtr == 0){
            minStack.push_back(val);
            return;
        }
        if(val < minStack[topPtr - 1]){
            minStack.push_back(val);
            return;
        }
        minStack.push_back(minStack[topPtr - 1]);
        return;
    }
    
    void pop() {
        topPtr--;
        myStack.pop_back();
        minStack.pop_back();
        return;
    }
    
    int top() {
        return myStack[topPtr];
    }
    
    int getMin() {
        return minStack[topPtr];
    }
};
