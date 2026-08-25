class Solution {
public:
    void backtrack(int openP , int closeP , string str , int n , vector<string>& out){
        if(openP == closeP && openP+ closeP == n*2){
            out.push_back(str);
            return;
        }
        if(openP < n){
            backtrack(openP+1 , closeP, str + "(", n, out);
        }
        if(closeP < openP){
            backtrack(openP, closeP+1, str + ")", n, out);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> out;
        backtrack(0, 0 , "" , n , out);
        return out;
    }
};