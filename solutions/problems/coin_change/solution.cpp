class Solution {
public:
    int mincoin(int i , int amount , vector<int> &coins , vector<vector<int>> &memo ){
        if(amount == 0){
            return 0;
        }
        if(amount<0 || i == coins.size()){
            return INT_MAX;
        }
        if(memo[i][amount] != -1){
            return memo[i][amount];
        }
        int take = INT_MAX;
        
        if(coins[i]>0){
            take = mincoin(i , amount - coins[i] , coins , memo);
            if(take != INT_MAX){
                take++;
            }
        }
        int not_take = mincoin(i+1 , amount ,coins , memo);
        return memo[i][amount] = min(take , not_take);
        

    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> memo(coins.size() , vector<int>(amount+1 , -1));
        int res = mincoin(0 , amount , coins , memo);
        return res!=INT_MAX?res:-1;



        
        }
};