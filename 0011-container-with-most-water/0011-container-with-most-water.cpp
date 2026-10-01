class Solution {
public:
    int maxArea(vector<int>& height) {
    //    int maxarea=0, area=0;
    //    int wt=0, ht=0;

    //    for(int i=0; i< height.size(); i++)
    //    {
    //     for(int j=0; j<height.size(); j++)
    //     {
    //        wt=j-i;
    //        ht=min(height[i], height[j]);
    //        area=wt*ht;
    //        maxarea=max(area, maxarea);

    //     }
    //    }
    //     return maxarea;

    int i=0, j=height.size()-1;
    int wt=0, ht=0;
    int ma=0;

    while(i<j)
    {
        wt=j-i;
        ht=min(height[i], height[j]);
        int area=wt*ht;
        ma=max(ma, area);

        (height[i]<height[j])? i++ : j--;

        // if(height[i]<height[j])
        // i++;
        // else
        // j--
    }

    return ma;
    }
};