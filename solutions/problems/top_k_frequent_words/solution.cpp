class Solution {
public:
    struct Comp{
        bool operator()(const pair<int , string>& a, const pair<int , string>& b ){
            if(a.first == b.first){
                return a.second > b.second; 
            }
            return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string , int > mp;
        for(auto i : words){
            mp[i]++;
        }

        priority_queue<pair<int , string> , vector<pair<int , string>>, Comp > pq;
        for(const auto& [key , value] : mp){
            pq.push({value , key});
        }
        vector<string> out;
        while(k > 0){
            out.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return out;
        
    }
};