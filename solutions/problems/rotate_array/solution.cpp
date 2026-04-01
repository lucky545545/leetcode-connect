class Solution {
public:
    void rotate(vector<int>& num, int k) {
        k = k%num.size();
        reverse(num.begin() , num.end());
        reverse(num.begin() , num.begin() + k);
        reverse(num.begin()+k , num.end());
        
    }
};