class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result {0}, counter{0};
        for(int num: nums){
            counter = num ? counter + 1 : 0;
            result = max(result, counter);
        }
        return result;
    }
};