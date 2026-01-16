class Solution {
public:
    int ans(int index , int k , vector<int>& out){ 
        if(out.size() == 1){
            return out[0];
        }
        index = (index + k -1) % out.size();
        out.erase(out.begin() + index);
        return ans(index , k , out);
    }
    int findTheWinner(int n, int k) {
        vector<int> out;
        for(int i = 1 ; i < n+1 ; i++){
            out.push_back(i);
        }
        int answer = ans(0 , k , out);
        return answer;
    }
};