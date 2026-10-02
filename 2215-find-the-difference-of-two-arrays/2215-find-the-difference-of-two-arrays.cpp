class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        vector<int> ans2;

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        for (auto x : nums1) {
            if (s2.find(x) != s2.end()) {
                s1.erase(x);
                s2.erase(x);
            }
        }

        for (auto x : s1) {
            ans1.push_back(x);
        }
        for (auto x : s2) {
            ans2.push_back(x);
        }
        return {ans1, ans2};
    }
};

//   for(int i=0; i<nums1.size(); i++)
//   {
//     bool flag= true;
//     for(int j=0; j<nums2.size(); j++)
//     {
//     if(nums1[i]!=nums2[j])
//       flag =false;
//       else
//       flag= true;
//     }

//     if(!flag)
//     ans1.push_back(nums1[i])
//   }