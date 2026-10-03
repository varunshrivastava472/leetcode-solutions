class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, int> f1;
        unordered_map<char, int> f2;

        for(int i = 0; i < s.size(); i++)
        {
            // Give each new character a number
            if(f1.find(s[i]) == f1.end())
                f1[s[i]] = i;

            if(f2.find(t[i]) == f2.end())
                f2[t[i]] = i;

            // Compare the position stored for both characters
            if(f1[s[i]] != f2[t[i]])
                return false;
        }

        return true;
    }
};