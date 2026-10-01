class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int m=0;

        // for(int i=0; i<prices.size(); i++)
        // {
        //     int n=0;
        //     for(int j=prices.size()-1; j>i; j--)
        //     {
        //         n=prices[j]-prices[i];
        //         m=max(m,n);
        //     }
        // }

        // return m;


        int mp=0, bestbuy=prices[0];

        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]>bestbuy)
            {
                mp=max(mp, prices[i]-bestbuy);
            }

            bestbuy=min(bestbuy, prices[i]);
        }
        return mp;
    }
};