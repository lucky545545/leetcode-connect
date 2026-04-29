class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int t1, t2;
        for(int i = 0 ; i< n  ; i++){
            if(colors[i] != colors[n-1]){
                t1 = n - i -1;
                break;
            }
        }
        for(int i = n-1 ; i>= 0 ; i--){
            if(colors[i] != colors[0]){
                t2 = i;
                break;
            }
        }
        return max(t1 , t2);
        
    }
};