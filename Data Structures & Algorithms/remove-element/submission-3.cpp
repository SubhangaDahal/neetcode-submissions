class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ptrdiff_t n {ssize(nums)}, i {0};
        while(i < n) {
            if (nums[i] == val) {
                nums[i] = nums[--n];
            }
            else {
                ++i;
            }
        }
        return static_cast<int>(n);
    }
};