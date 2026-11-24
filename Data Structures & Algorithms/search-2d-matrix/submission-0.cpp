class Solution {
public:
    ptrdiff_t findRow(const vector<vector<int>>& matrix, const int target){
        ptrdiff_t low {0}, high {ssize(matrix) - 1};
        ptrdiff_t inSize = ssize(matrix[0]) - 1;
        if(target < matrix[low][0] || target > matrix[high][inSize]) return -2;
        while(low <= high) {
            const ptrdiff_t mid = (low + high) / 2;
            const int midVal = matrix[mid][0];
            if(matrix[mid][0] == target || matrix[mid].back() == target) return -1;
            if(matrix[mid][0] < target && matrix[mid].back() > target){
                return mid;
            }
            if (matrix[mid][0] < target) {
                low = mid + 1;
                continue;
            }
            high = mid - 1;
        }   
        return -2;
    }

    bool searchMatrix(const vector<vector<int>>& matrix, const int target) {
        //findRow returns -1 when it has found the exact value and -2 when the target is guaranteed not to be found
        const ptrdiff_t row {findRow(matrix, target)};
        if(row == -1) return true;
        if(row == -2) return false;
        ptrdiff_t low {0}, high {std::ssize(matrix[row]) - 1};
        while(low <= high){
            const ptrdiff_t mid {(low+high) / 2};
            if(matrix[row][mid] == target) return true;
            if(matrix[row][mid] < target){
                low = mid + 1;
                continue;
            }
            high = mid - 1;
        }
        return false;
    }
};
