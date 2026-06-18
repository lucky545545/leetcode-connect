class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourhand = (hour%12)*30 + minutes*(0.5);
        double minutehand = minutes*6;
        double ans = min(abs(hourhand - minutehand) , 360 - abs(hourhand - minutehand) );
        return ans;
    }
};