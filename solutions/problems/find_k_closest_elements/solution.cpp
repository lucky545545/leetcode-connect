class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq;
        for(auto i : arr){
            int val = abs(x - i);
            pq.push({val , i});
        }
        vector<int> out;
        while(k>0){
            out.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        sort(out.begin() , out.end());
        return out;
        
    }
};