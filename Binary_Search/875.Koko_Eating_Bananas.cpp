class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            long long hours_needed = 0;

            for (int i : piles) {
                hours_needed += (i + mid - 1) / mid;
            }

            if (hours_needed <= h) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};
