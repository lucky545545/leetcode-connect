#include <stack>
class Solution {
public:
    string removeStars(string s){
        string out = ""; 
        for(auto i : s){
            if(i == '*'){
                out.pop_back();
            }
            else{
                out.push_back(i);
            }
        }
        return out;
        }
    };
