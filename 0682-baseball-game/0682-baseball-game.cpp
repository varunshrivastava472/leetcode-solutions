class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "+")
            {
                ans.push_back(ans[ans.size()-2] + ans[ans.size()-1]);
            }
            else if(operations[i] == "D")
            {
                ans.push_back(ans[ans.size()-1] * 2);
            }
            else if(operations[i] == "C")
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;

        for(auto n : ans)
        {
            sum += n;
        }

        return sum;
    }
};