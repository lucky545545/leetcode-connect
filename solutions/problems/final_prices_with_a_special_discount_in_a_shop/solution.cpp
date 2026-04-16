class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> ans;
        for(int i = 0 ; i < prices.size() ; i++){
            st.push(prices[i]);
        }
        stack<int> temp  = st;
        for(int i = 0 ; i< prices.size() ; i++){
            int discountP = prices[i];
            temp = st;
            int k = prices.size()-i;
            while(k-1 != 0){
                if(temp.top() <= prices[i]){
                    discountP = prices[i]- temp.top();
                }
                k--;
                temp.pop();
            }
            ans.push_back(discountP);
        }
        return ans;
    }
};