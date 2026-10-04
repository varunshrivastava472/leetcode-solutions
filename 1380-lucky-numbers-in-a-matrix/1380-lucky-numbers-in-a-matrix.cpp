class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int maxi = INT_MIN;
        for (int i = 0; i < matrix.size(); i++) {
            int mini = INT_MAX;
            for (int j = 0; j < matrix[i].size(); j++) {
                mini = min(mini, matrix[i][j]);
            }

            maxi = max(maxi, mini);
        }
         

         
        for (int j = 0; j < matrix[0].size(); j++) {
            int m=INT_MIN;
            for (int i = 0; i < matrix.size(); i++) {
                m=max(m, matrix[i][j]);
            }
            if(m==maxi)
            return {maxi};
        }
        return {};
    }
};