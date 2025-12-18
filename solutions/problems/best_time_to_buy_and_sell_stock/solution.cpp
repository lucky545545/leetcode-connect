class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pr = INT_MAX; 
        int prof_max = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i] < min_pr){
                min_pr = prices[i];
            }
            prof_max = max(prices[i] - min_pr , prof_max );
        }
        return prof_max;
        
    }
};