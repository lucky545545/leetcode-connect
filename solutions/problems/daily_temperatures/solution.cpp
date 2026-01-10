class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> out(temperatures.size() ,0 );
        st.push(0);
        for(int i = 1 ; i<temperatures.size() ; i++){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                int idx = st.top();
                st.pop();
                out[idx] = i - idx;
            }
            st.push(i);
        }
        return out;
        
    }
};