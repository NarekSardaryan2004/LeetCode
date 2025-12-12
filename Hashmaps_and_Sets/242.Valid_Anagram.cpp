class Solution {
public:
    bool isAnagram(string s, string t) {
        // First Solution:
        
        // if (s.size() != t.size()) return false;

        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());

        // for (size_t i = 0; i < s.size(); ++i) {
        //     if (s[i] != t[i])
        //         return false;
        // }

        // return true;

        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> count;

        for (char c : s) {
            count[c]++;
        }

        for (char c : t) {
            count[c]--;
            if (count[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
