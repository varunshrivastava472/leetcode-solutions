class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int m=t;
        while(m>0)
        {
              num++;
              m--;
        }
        return num+t;
        
    }
};