class Solution {
public:
    bool isPalindrome(const string& s) {
        int front {0}, back {-1};
        back = static_cast<int>(s.size());
        while(front<back){
            if(!isalnum((s[front]))){
                ++front;
                continue;
            }
            if(!isalnum((s[back]))){
                --back;
                continue;
            }
            const unsigned char frontChar {static_cast<unsigned char>(s[front])},
              backChar {static_cast<unsigned char>(s[back])};
            if(tolower(frontChar) != tolower(backChar)){
                return false;
            }
            ++front;
            --back;
        }
        return true;
    }
};
