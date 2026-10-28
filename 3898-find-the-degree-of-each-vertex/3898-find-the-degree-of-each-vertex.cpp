class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans(matrix.size(), 0);

        if (matrix.size() <= 1)
            return {0};

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                ans[i] += matrix[i][j];
            }
        }

        return ans;
    }
};