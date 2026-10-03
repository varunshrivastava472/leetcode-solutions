class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int k = 0;

        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    bool found = false;

                    for(int l = 0; l < ans.size(); l++)
                    {
                        if(ans[l] == nums1[i])
                        {
                            found = true;
                            break;
                        }
                    }

                    if(!found)
                    {
                        ans.push_back(nums1[i]);
                        k++;
                    }

                    break;
                }
            }
        }

        return ans;
    }
};