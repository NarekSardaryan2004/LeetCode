class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        std::vector<int> res(n, 0);
        std::stack<int> stack;

        for (int i = 0; i < n; ++i) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
                int prev_index = stack.top();
                stack.pop();
                res[prev_index] = i - prev_index;
            }
            stack.push(i);
        }

        return res;
    }
};
