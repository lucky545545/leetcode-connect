class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long dc = 1 ;
        long long ans = 0;
        for(int i = 1 ;i < prices.size() ; i++){
            if(prices[i-1]  ==  prices[i] + 1){
                dc++;
            }
            else{
                ans = ans + ((dc-1)*dc)/2;
                dc = 1;
            }
        }
        ans = ans + ((dc-1)*dc)/2;
        return ans + prices.size();


        
    }
};