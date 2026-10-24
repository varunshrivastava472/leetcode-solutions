class Solution {
public:
    int scoreOfString(string s) {
        int add=0;
        for(int i=0; i<s.size()-1; i++)
        {
            add+=abs(s[i]-s[i+1]);
        }
        return add;
    }
};