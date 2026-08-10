class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return {};
        }
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> out;

        int mergeEnds = intervals[0][1];
        int first = intervals[0][0];
        for(int i = 1 ; i <= intervals.size()-1 ; i++){
            if(intervals[i][0] <= mergeEnds){                  //[[1,10], [2,3], [11,12]]
                mergeEnds = max(mergeEnds , intervals[i][1]); //[[1,3],[2,6],[8,10],[15,18]]
            }
            else{
                out.push_back({first , mergeEnds});
                first = intervals[i][0];
                mergeEnds = intervals[i][1];
            }
        }
        out.push_back({first , mergeEnds});
        return out;
    }
};