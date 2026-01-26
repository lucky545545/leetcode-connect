class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> out;
        int min_count = INT_MAX;
        int diff;
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i < arr.size() -1 ; i++){
            diff = arr[i+1] - arr[i];
            if(diff < min_count){
                min_count = diff;
                out.clear();
                out.push_back({ arr[i] , arr[i+1] });
            }
            else if(diff == min_count){
                out.push_back({arr[i] , arr[i+1]});
            }
        }
    return out;
    }
};