class Solution {
public:
    vector<vector<int>> out;
    vector<int> curr;
    void backtrack(int n , int k , int currNum){
        if(curr.size() == k){
            out.push_back(curr);
            return;
        }
        if(currNum > n){
            return;
        }
        curr.push_back(currNum);
        backtrack(n , k ,currNum+1);
        curr.pop_back();
        backtrack(n , k ,currNum+1);
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        int currNum = 1;
        backtrack(n , k , currNum);
        return out;
    }
};