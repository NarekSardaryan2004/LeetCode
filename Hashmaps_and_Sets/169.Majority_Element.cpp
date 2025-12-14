class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> count;

        for (int i : nums) {
            count[i]++;
        }

        int n = nums.size();
        for (const auto& pair : count) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }

        return -1;
    }
};
