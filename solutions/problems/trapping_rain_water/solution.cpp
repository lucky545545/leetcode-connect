class Solution {
public:
    int trap(vector<int>& height) {
        int L = 0;
        int R = height.size()-1;
        int water = 0;
        int left_max = height[L];
        int right_max = height[R];

        while(L < R){
            if(left_max > right_max){
                R--;
                right_max = max(right_max , height[R]);
                water += right_max - height[R];
            }
            else{
                L++;
                left_max = max(left_max , height[L]);
                water += left_max - height[L];
            }    
        }
        return water;
    }
};