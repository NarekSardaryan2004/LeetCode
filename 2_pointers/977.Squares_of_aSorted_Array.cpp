class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // O(n log(n))
        
        // for (int i = 0; i < nums.size(); ++i) {
        //     nums[i] *= nums[i];
        // }

        // std::sort(nums.begin(), nums.end());

        // return nums;

        // O(n log(n)) bad case

        // std::multiset<int> temp;
        // for (auto& el : nums) {
        //     temp.insert(el * el);
        // }

        // std::vector<int> result;
        // result.reserve(nums.size());

        // for (const auto& el : temp) {
        //     result.push_back(el);
        // }

        // return result;

        int n = nums.size();
        std::vector<int> res(n);

        int left = 0, right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            long long leftSq = (long long)nums[left] * nums[left];
            long long rightSq = (long long)nums[right] * nums[right];

            if (leftSq > rightSq) {
                res[pos--] = leftSq;
                ++left;
            } else {
                res[pos--] = rightSq;
                --right;
            }
        }

        return res;
    }
};
