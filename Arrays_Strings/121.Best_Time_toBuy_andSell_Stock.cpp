class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = prices[0];
        int max_prof = 0;

        for (int i = 1; i < prices.size(); ++i) {
            max_prof = std::max(max_prof, prices[i] - currMin);
            // currMin = std::min(currMin, prices[i]);
            if (prices[i] < currMin) {
                currMin = prices[i];
            }
            else {
                
            }
        }

        return max_prof;
    }
};
