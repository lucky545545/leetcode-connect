class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        vector<vector<int>> out;
        int i = 0;
        int j = 0; 
        while(i < first.size() && j < second.size()){
            int firstintersection = max(first[i][0] , second[j][0]);
            int secondintersection = min(first[i][1] , second[j][1]);
            if(firstintersection <= secondintersection){
                out.push_back({firstintersection , secondintersection}); //[[1,4] , [5,8] , [9,10] , [12,14]] ||  [[2,10] , [11,15]]
                                       
            }
            if(first[i][1] > second[j][1]){
                    j++;
                }
                else{
                    i++;
                }
        }
        return out;
    }
};