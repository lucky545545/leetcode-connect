class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> out;
        int i = 0;
        int j = 0; 
        while(i != m && j != n){
            if(nums1[i] <= nums2[j]){
                out.push_back(nums1[i]);
                i++;
            }
            else{
                out.push_back(nums2[j]);
                j++;
            }
        }
        if(i == m){
            while(j != n ){
                out.push_back(nums2[j]);
                j++;
            }
        }
        else{
            while(i != m ){
                out.push_back(nums1[i]);
                i++;
            }
        }
        for(int k = 0 ; k < out.size() ; k++){
            nums1[k] = out[k];
        }
    }
};