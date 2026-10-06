class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;

        for (auto n : arr)
            mp[n]++;

        set<int> st;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            st.insert(it->second);
        }

        if (st.size() == mp.size())
        return true;

        return false;
            
    }
};