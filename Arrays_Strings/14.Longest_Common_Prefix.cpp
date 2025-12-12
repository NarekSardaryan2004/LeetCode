class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length();
        std::string prefix = "";

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < strs.size(); ++j) {
                if (i > strs[j].size() || strs[j][i] != strs[0][i]) {
                    return prefix;
                }
            }
            prefix += strs[0][i];
        }

        return prefix;
    }
};
