class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int high_last = -1;
        vector<int> out = {-1 ,-1};
        int n = towers.size();
        int cx = center[0];
        int cy = center[1];
        for(const auto& i : towers){
            int x = i[0];
            int y = i[1];
            int q = i[2];
            if(abs(cx - x) + abs(cy - y) <= radius){
                if(q > high_last){
                    out = { x ,y};
                    high_last = q;
                    }
                else if(q == high_last){
                        if(out.empty()){
                             out = { x ,y}; 
                        }
                        else if(x < out[0]){
                             out = { x ,y};
                            
                        }
                        else if(x == out[0] && y < out[1]){
                             out = { x ,y};
                        }
                    }
            }  
        }
        return out;
        
    }
};