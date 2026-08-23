class Solution {
public:
    vector<vector<int>> out;
    vector<int> curr;
    void backtrack(vector<int>& candidates , int target , int index , int sum){
           // [1 , 1 , 2 , 5 , 6 , 7 , 10]
        if(sum == target){
            out.push_back(curr);
            return;
        }
        if(sum > target || index >= candidates.size()){
            return;
        }
        curr.push_back(candidates[index]);
        backtrack(candidates , target , index+1 , sum+candidates[index]);
    
        curr.pop_back();
        int nextIdx = index+1;
        while(nextIdx < candidates.size() && candidates[nextIdx] == candidates[index]){
            nextIdx++;
        }
        backtrack(candidates , target , nextIdx , sum);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin() , candidates.end());
        int sum = 0;
        backtrack(candidates , target , 0 , sum);
        return out;
    }
};