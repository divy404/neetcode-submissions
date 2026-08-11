class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) {
            return false;
        }
        unordered_map<int,int>n,m;
        for(char c: s) n[c]++;
        for(char c: t) m[c]++;

        return n==m;

    }
};
