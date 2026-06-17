class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temper) {
        stack<int> st;
        vector<int> ans(temper.size() , 0);
        for(int i = 0 ; i < temper.size() ; i++){
            while(!st.empty() && temper[st.top()] < temper[i]){
                ans[st.top()] = i - st.top() ;
                st.pop(); 
            }
            st.push(i);
        }
        return ans;
    }
};