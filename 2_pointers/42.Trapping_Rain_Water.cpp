class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int left = 0, right = height.size() - 1;
        int res = 0;
        int left_max = 0, right_max = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= height[left_max]) {
                    left_max = height[left];
                }
                else {
                    res += left_max - height[left];
                }
                ++left;
            }
            else {
                if (height[right] >= height[right_max]) {
                    right_max = height[right];
                }
                else {
                    res += right_max - height[right];
                }
                --right;
            }
        }

        return res;
    }
};
