class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::unordered_map<char, int> stoneCount;
        for (char s : stones) {
            stoneCount[s]++;
        }

        int totalJewels = 0;
        for (char j : jewels) {
            totalJewels += stoneCount[j];
        }

        return totalJewels;
    }
};
