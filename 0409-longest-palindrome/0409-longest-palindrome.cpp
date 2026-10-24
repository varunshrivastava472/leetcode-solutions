
class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;

        for (auto n : s) {
            m[n]++;
        }

        int count = 0;

        for (auto i = m.begin(); i != m.end(); i++) {
            if (i->second % 2 == 0) {
                count += i->second;
            }
            else {
                count += i->second - 1;
            }
        }

        if (count < s.length()) {
            count++;
        }

        return count;
    }
};
