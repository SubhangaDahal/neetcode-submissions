class Solution {
public:
    int maxArea(vector<int>& heights) {
        int front {0}, back {static_cast<int>(heights.size() - 1)}, maxWater{0}, currentWater{0};
        while(front < back){
            currentWater = (back - front)*min(heights[front], heights[back]);
            if(currentWater > maxWater) maxWater = currentWater;
            if(heights[front] < heights[back]){
                ++front;
                continue;
            }
            --back;
        }
        return maxWater;
    }
};
