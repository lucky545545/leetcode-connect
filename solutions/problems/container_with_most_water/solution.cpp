class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 ;
        int j = height.size()-1;
        int curr_height;
        int curr_area;
        int max_area = 0;
        while(i < j){
            curr_height = min(height[i] , height[j]);
            curr_area = curr_height*(j-i);
            max_area = max(curr_area , max_area);

            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return max_area;
    }
};