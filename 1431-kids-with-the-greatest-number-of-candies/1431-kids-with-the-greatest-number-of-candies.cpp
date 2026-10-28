class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> v=candies;
        vector<bool> b(candies.size(), true);
        int m=0;

        for(int i=0; i<candies.size(); i++)
        {
            for(int j=0; j<candies.size(); j++)
            {
                if (v[i]+extraCandies < candies[j])
                b[i]=false;
            }
        }
        return b;
    }
};