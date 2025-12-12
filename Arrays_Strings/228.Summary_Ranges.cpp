class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }

        std::vector<std::string> res;
        int i = 1;
        long start = nums[0];
        long last = nums[0];
        auto append = [&res](long last,  long start) -> void {
            if (last == start) {
                res.push_back(std::to_string(last));
            }
            else {
                res.push_back(std::to_string(start) + "->" + std::to_string(last));
            }
        };
        
        while (i < nums.size()) {
            if ((static_cast<long>(nums[i]) - static_cast<long>(nums[i - 1])) != 1L) {
                last = nums[i - 1];
                append(last, start);
                start = nums[i];
            }
            
            last = nums[i];
            ++i;
        }

        append(last, start);

        return res;
    }
};
