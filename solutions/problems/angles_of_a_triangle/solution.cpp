class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        if(a+b <= c || b+c <= a || a+c <= b){
            return {};
        }
        vector<double> angle(3);
        angle[0] = (acos((pow(b,2) + pow(c,2) - pow(a,2))/(2*b*c)))*180/M_PI;
        angle[1] = (acos((pow(a,2) + pow(c,2) - pow(b,2))/(2*a*c)))*180/M_PI;
        angle[2] = (acos((pow(b,2) + pow(a,2) - pow(c,2))/(2*b*a)))*180/M_PI;
        sort(angle.begin() , angle.end());
        return angle;
    }
};