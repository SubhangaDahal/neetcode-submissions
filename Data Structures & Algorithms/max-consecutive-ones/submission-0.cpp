class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max {0}, counter{0};
        for(int num: nums){
            if(num == 0){
                counter = 0;
                continue;
            }
            else {
                counter++;
            }
            if(counter > max){
                max = counter;
            }
        }
        return max;
    }
};