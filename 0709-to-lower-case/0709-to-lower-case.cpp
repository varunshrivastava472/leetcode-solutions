class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++)
        {
            long n = s[i];

            if(n >= 65 && n <= 90)
            {
                n = n + 32;
            }

            ans += char(n);
        }

        return ans;
    }
};