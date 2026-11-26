class Solution {
public:
    int minEatingSpeed(const vector<int>& piles, const int h) {
        //solution assumes that h is greater that maxElement * piles.size()
        int high {ranges::max(piles)}, low {1}, timeTaken {}, mid {};
        
        while(low < high){
            mid = (low + high) / 2;
            for(int pile: piles){
                int numberOfHours = (pile+mid-1)/mid;
                timeTaken += numberOfHours;
            }
            if(timeTaken <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
            timeTaken = 0;
        }
        return low;
    }
};
             

