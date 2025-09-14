class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        unordered_map<int , int > Hmap;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int n = arrivals.size();
        while(j < n){
            Hmap[arrivals[j]]++;
            if(Hmap[arrivals[j]] > m){
                cnt++;
                Hmap[arrivals[j]]--;
                arrivals[j] = 0;
            }
            if(j-i+1 == w){
                Hmap[arrivals[i]]--;
                i++;
            }
            j++;
            
        }
        return cnt;
        
    }
};