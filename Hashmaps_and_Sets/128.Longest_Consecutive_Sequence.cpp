class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;

        std::sort(nums.begin(), nums.end());

        int maxLen = 1;
        int currLen = 1;

        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            else if (nums[i] == nums[i - 1] + 1) {
                ++currLen;
            }
            else {
                maxLen = std::max(maxLen, currLen);
                currLen = 1;
            }
        }

        return std::max(maxLen, currLen);
    }
};
