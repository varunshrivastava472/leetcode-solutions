class Solution {
public:
    int mirrorDistance(int n) {
        int m=n;
        int digit=0;
    
        while(n>0)
        {
            int rem= n%10;
            n=n/10;
            digit=digit*10+rem;
        }

        return abs(m-digit);
    }
};