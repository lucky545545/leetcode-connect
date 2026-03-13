class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        priority_queue<pair<int , int>> pq;
        for(const auto& [key , value] : mp){
            pq.push({value , key});
        }
        vector<int> out;
        while(k > 0){
            out.push_back(pq.top().second);
            pq.pop();
            k--;
        }
    return out;
    }
};