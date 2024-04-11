class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxp=0,minp=prices[0], i;
        for(i=0; i<prices.size(); i++)
        {
            minp=min(minp,prices[i]);
            maxp=max(maxp,prices[i]-minp);
        }
        return maxp;
    }
};