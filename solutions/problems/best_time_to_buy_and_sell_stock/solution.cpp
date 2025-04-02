class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_counter = INT_MAX;
        for( int i=0 ; i<prices.size() ; i++){
            max_profit = max(max_profit , prices[i] - min_counter );
            min_counter = min(prices[i] , min_counter);
        }
        return max_profit;
        

            

        
        
    }
};