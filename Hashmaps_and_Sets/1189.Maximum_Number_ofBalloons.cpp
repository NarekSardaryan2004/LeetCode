class Solution {
public:
    int maxNumberOfBalloons(string text) {
        std::unordered_map<char, int> count;

        for (char c : text) {
            count[c]++;
        }

        int balloons = count['b'];
        balloons = std::min(balloons, count['a']);
        balloons = std::min(balloons, count['l'] / 2);
        balloons = std::min(balloons, count['o'] / 2);
        balloons = std::min(balloons, count['n']);

        return balloons;
    }
};
