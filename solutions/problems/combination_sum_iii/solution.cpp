class Solution {
public:
    vector<vector<int>> out;
    vector<int> curr;
    void backtrack(int k , int n , int currNum , int sum){
        if(sum == n && k == 0){
            out.push_back(curr);
            return;
        }
        
        if(sum >= n || currNum > 9){
            return;
        }
        curr.push_back(currNum);
        
        backtrack(k-1 , n , currNum+1 , sum+currNum);
        curr.pop_back();
        backtrack(k , n , currNum+1 , sum);
        return;
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int currNum = 1;
        int sum = 0;
        if(k*(k+1)/2 > n){
            return out;
        }
        backtrack(k , n , currNum , sum);
        return out;
    }
};