class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> numStack;
        int k {0};
        int length = static_cast<int>(nums.size());
        numStack.reserve(length);
        for(int i = 0; i < length; i++){
            if(nums[i] != val){
                numStack.push_back(nums[i]);
                k++;
            }
        }
        nums = numStack;
        return k;
    }
};