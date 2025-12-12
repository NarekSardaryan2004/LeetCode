class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // First solution O(n log n) time:
        
        // if (nums.size() <= 1) return false;

        // std::sort(nums.begin(), nums.end());

        // for (size_t i = 0; i < nums.size() - 1; ++i) {
        //     if (nums[i] == nums[i + 1]) {
        //         return true;
        //     }
        // }

        // return false;

        // Second solution O(n) time:

        std::unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            
            seen.insert(num);
        }

        return false;
    }
};
