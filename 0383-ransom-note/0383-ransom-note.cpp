class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> freq;
        
        for(auto n : magazine)
        freq[n]++;
         
        for(auto n: ransomNote)
        freq[n]--;

        for(auto it=freq.begin(); it!=freq.end(); it++)
        {
            if(it->second<0)
            return false;
        }
        return true;
    }
};