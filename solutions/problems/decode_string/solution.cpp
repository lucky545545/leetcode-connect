class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ']'){
                string temp = "";
                while(st.top() != '['){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                reverse(temp.begin() , temp.end());



                string numstr = "";
                while(!st.empty() && isdigit(st.top())){
                    numstr.push_back(st.top());
                    st.pop();
                }
                reverse(numstr.begin(), numstr.end());
                int num = stoi(numstr);

                string result = "";
                for(int j = 0 ; j < num ; j++){
                    result += temp;
                }

                for(char c : result){
                    st.push(c);
                }
            }
            else{
                st.push(s[i]);
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