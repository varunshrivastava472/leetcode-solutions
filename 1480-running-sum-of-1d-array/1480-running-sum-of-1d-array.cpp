class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> n;

        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            n.push_back(sum);
        }
        return n;
    }
};