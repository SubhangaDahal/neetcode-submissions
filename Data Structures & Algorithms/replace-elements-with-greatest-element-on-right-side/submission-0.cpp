class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        ptrdiff_t lastIndex {ssize(arr) - 1};
        int greatest = arr[lastIndex], lastVal{-1};
        for(auto i {lastIndex - 1}; i >= 0; i--){
            lastVal = arr[i];
            arr[i] = greatest;
            greatest = greatest < lastVal ? lastVal : greatest;
        }
        arr[lastIndex] = -1;
        return arr;
    }
};