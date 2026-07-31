class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = INT_MIN;

        for (int pile : piles) {
            right = max(right, pile);
        }

        int firstFeasible = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long totalHours = 0;

            for (int pile : piles) {
                totalHours += (pile + mid - 1LL) / mid;
            }

            if (totalHours <= h) {
                firstFeasible = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return firstFeasible;
    }
};