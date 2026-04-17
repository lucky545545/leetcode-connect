class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        for(int  i = 0 ; i < nums2.size() ; i++){
            st.push(nums2[i]);
        }
        int great = -1;
        stack<int> temp;
        for(int i = 0 ; i < nums1.size() ; i++){
            temp = st;
            while( !st.empty() && temp.top() != nums1[i] ){
                if(temp.top() > nums1[i]){
                    great = temp.top();
                }
                temp.pop();
            }
            nums1[i] = great;
            great = -1;
        }
        return nums1;
    }
};