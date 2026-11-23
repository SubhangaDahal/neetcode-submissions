class Solution {
public:
    int trap(const vector<int>& height) {
        if (height.empty()) {
            return 0;
        }
        ptrdiff_t l {0}, r = {ssize(height) - 1};
        int leftMax {height[l]}, rightMax {height[r]};
        int res = 0;
        while (l < r) {
            if (leftMax < rightMax) {
                ++l;
                leftMax = max(leftMax, height[l]);
                res += leftMax - height[l];
            } else {
                --r;
                rightMax = max(rightMax, height[r]);
                res += rightMax - height[r];
            }
        }
        return res;
    }
};