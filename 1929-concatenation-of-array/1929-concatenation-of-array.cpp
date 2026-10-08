class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v(nums.begin(),nums.end()) ;

        for(int i=0; i<v.size(); i++)
        {
            nums.push_back(v[i]);
        }
        return nums;
    }
};