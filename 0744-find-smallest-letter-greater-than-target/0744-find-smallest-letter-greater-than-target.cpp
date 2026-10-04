class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char mini = CHAR_MAX;
        for (int i=0; i<letters.size(); i++) {
            if(letters[i]>target)

            mini=min(mini,letters[i]);
        }
        if(mini==CHAR_MAX)
        return letters[0];
        
        return mini;
    }
};