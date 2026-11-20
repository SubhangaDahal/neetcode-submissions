class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> existing_nums {};
        int length = static_cast<int>(nums.size());
        for(const int num: nums){
            if(existing_nums.contains(num)){
                return true;
            }
            else{
                existing_nums.insert(num);
            }
        }
        return false;
    }
};