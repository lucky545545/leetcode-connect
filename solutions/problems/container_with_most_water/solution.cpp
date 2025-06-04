class Solution {
public:
    int maxArea(vector<int>& height) {
        int area_max = 0;
        int i;
        int j;
        for(i = 0 , j = height.size()-1 ; i!=j ;){
            if(min(height[i],height[j]) == height[i]){
                if((j-i)*height[i] > area_max){
                    area_max = (j-i)*height[i];
                }
                i++;
            }
            else{
                if((j-i)*height[j] > area_max){
                    area_max = (j-i)*height[j];
                }
                j--;
            }

            
        }
        return area_max;

        
    }
};