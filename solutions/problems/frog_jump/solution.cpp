class Solution {
public:
    unordered_map<int , int> mp;
    vector<vector<int>> memo;
    int n;
    bool solve(int pos , int jump , vector<int>& stones){
        if(pos == n-1){
            return true;
        }
        if(pos < 0 || pos >= n){
            return false;
        }
        if(memo[pos][jump] != -1){
            return memo[pos][jump];
        }
        for(int k = -1 ; k <= 1 ; k++){
            int nextJump = jump+k;
            if(nextJump <= 0){
                continue;
            }
            if(mp.find(stones[pos] + nextJump) != mp.end()){
                if(solve(mp[stones[pos] + nextJump] , nextJump , stones)){
                    return memo[pos][jump] = true;
                }
            }
        }
        return memo[pos][jump] = false;
    }
    bool canCross(vector<int>& stones) {
        n = stones.size();
        memo.assign(n , vector<int> (n+1 , -1));
        for(int i = 0 ; i < stones.size() ; i++){
            mp[stones[i]] = i;
        }
        return solve(0 , 0 , stones);
    }
};