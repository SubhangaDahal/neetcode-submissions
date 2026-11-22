class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.reserve(ssize(nums) * 2);
        nums.insert(nums.begin(), nums.begin(), nums.end());
        return nums;
    }
};