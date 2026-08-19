class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i = 1 ; i < s.size() ; i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string out;
        while(!st.empty()){
            out.push_back(st.top());
            st.pop();
        }
        reverse(out.begin() , out.end());
        return out;
    }
};