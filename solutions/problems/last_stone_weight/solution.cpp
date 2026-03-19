class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i : stones){
            pq.push(i);
        }
        while(pq.size() > 1){
            int last1 = 0;
            int last2 = 0;
            last1 = pq.top();
            pq.pop();
            last2 = pq.top();
            pq.pop();
            if(last1 != last2){
                pq.push(last1 - last2);
            }
        }
        return pq.empty()? 0 : pq.top();
        
        
    }
};