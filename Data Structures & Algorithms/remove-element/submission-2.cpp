class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k {0};
        int length = static_cast<int>(nums.size());
        for(int i = 0; i < length; i++){
            if(nums[i] != val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};