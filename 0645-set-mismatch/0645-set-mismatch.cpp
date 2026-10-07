class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int ,int> freq;
        vector<int> ans;
        set<int> s(nums.begin(), nums.end());
        for(auto n: nums)
        freq[n]++;

        for(auto it=freq.begin(); it!=freq.end(); it++)
        {
            if (it->second >1)
            ans.push_back(it->first);
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(i+1)==s.end())
            ans.push_back(i+1);
        }

        return ans;
    }
};