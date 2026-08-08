class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26 , 0);

        for(auto i : tasks){
            mp[i - 'A']++;
        }
        int max_freq = *max_element(mp.begin() , mp.end());
        int max_count  = 0;

        for(auto i : mp){
            if(i == max_freq){
                max_count++;
            }
        }

        int time = (max_freq-1)*(n+1) + max_count;

        return max(static_cast<int>(tasks.size()) , time);
    }
};