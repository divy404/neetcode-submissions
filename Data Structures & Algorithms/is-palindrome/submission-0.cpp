class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        for(char c : s) {
            if(isalnum(c)) {
                copy += tolower(c);
            }
        }
        return copy == string(copy.rbegin(),copy.rend());
        
    }
};
