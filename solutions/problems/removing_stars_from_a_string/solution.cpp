class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto x : s){
            if(x != '*'){
                st.push(x);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        string out = "";
        while(!st.empty()){
            out.push_back(st.top());
            st.pop();
        }
        reverse(out.begin() , out.end());
        return out;
        
    }
};