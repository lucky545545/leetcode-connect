class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> Sstack;
        stack<char> Tstack;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '#' && !Sstack.empty()){
                Sstack.pop();
            }
            else if(s[i] == '#' && Sstack.empty()){
                continue;
            }
            else{
                Sstack.push(s[i]);
            }
        }
        for(int i = 0 ; i < t.size() ; i++){
            if(t[i] == '#' && !Tstack.empty()){
                Tstack.pop();
            }
            else if(t[i] == '#' && Tstack.empty()){
                continue;
            }
            else{
                Tstack.push(t[i]);
            }
        }
        if(Sstack == Tstack){
            return true;
        }
        return false;
    }
};