class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, std::vector<std::string>> mp;

        for (auto& s : strs) {
            std::string temp = s;
            std::sort(s.begin(), s.end());
            mp[s].push_back(temp);
        }

        for (auto& vec : mp) {
            res.push_back(vec.second);
        }

        return res;
    }
};
