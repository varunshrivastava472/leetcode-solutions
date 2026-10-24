class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div=0, non_div=0;
        for (int i=n; i>0; i--)
        {
            if (i%m==0)
            div+=i;
            else 
            non_div+=i;
        }
        return non_div-div;
    }
};