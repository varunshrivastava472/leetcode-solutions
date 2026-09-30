class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ch = s;

        for (int i = 0; i < s.size(); i++) {
            s[i] = ch[s.size() - 1 - i];
        }
    }
};