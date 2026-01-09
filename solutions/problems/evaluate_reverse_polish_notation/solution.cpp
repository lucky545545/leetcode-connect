class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s ;
        for(auto i : tokens){
            if(i == "-" || i == "*" || i == "+" || i == "/"){
                long long p = s.top();
                s.pop();
                long long q = s.top();
                s.pop();
                if(i == "+"){
                    s.push(p+q);
                }
                else if(i == "-"){
                    s.push(q-p);
                }
                else if(i == "*"){
                    s.push(p*q);
                }
                else if(i == "/"){
                    s.push(q/p);
                } 
            }
            else{
                s.push(stoll(i));
            }
        }
        return s.top();
        
    }
};