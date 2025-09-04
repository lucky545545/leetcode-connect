class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x_dist = 0;
        int y_dist = 0;
        if(x > z){
            x_dist = x-z;
        }
        else{
            x_dist = z-x;
        }
        if(y > z){
            y_dist = y-z;
        }
        else{
            y_dist = z-y;
        }
        if(x_dist<y_dist){
            return 1;
        }
        else if(x_dist>y_dist){
            return 2;
        }
        else{
            return 0;
        }
        
        
    }
};