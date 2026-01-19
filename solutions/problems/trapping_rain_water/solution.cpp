class Solution {
public:
    int trap(vector<int>& height) { 
        int n = height.size();
        int vol = 0;
        for(int i=1 ; i<n - 1 ; i++ ){
            int right = height[i];
            for(int j=i+1 ; j< n ; j++){
                right = max(height[j] , right);
            }
            int left = height[i];
            for(int j=0 ; j<i ; j++){
                left = max(height[j] , left); 
            }
            vol = vol + (min(left , right) - height[i]);
        }
        return vol;
    }
};