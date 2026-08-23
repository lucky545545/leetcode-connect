class Solution {
public:
    vector<vector<int>> out;
    vector<int> curr;
    void backtrack(vector<int>& candi , int target , int index , int sum ){
        if(sum == target){
            out.push_back(curr);
            return;
        }
        if(sum > target || index >= candi.size() ){
            return;
        }
        curr.push_back(candi[index]);
        backtrack(candi , target , index , sum+candi[index]);
        curr.pop_back();
        backtrack(candi , target , index+1 , sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index = 0;
        int sum = 0; 
        sort(candidates.begin() , candidates.end());
        backtrack(candidates , target , 0 , sum);
        return out;
    }
};