class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        for(auto i : points){
            int x = pow(i[0] , 2);
            int y = pow(i[1] , 2); 
            pq.push({x+y , {i[0] , i[1]}});
        }
        vector<vector<int>> out;
        while(k>0){
            int a = pq.top().second.first;
            int b = pq.top().second.second;
            out.push_back({a,b});
            pq.pop();
            k--;
        }
        return out;
        
    }
};