class Solution {
public:
    int calPoints(vector<string>& operations) {
        if (operations.empty()) return 0;
        std::stack<int> res;

        for (const string& s : operations) {
            if (s == "+") {
                int top1 = res.top();
                res.pop();
                int top2 = res.top();
                res.push(top1);
                res.push(top1 + top2);
            }
            else if (s == "D") {
                int top = res.top();
                res.push(top * 2);
            }
            else if (s == "C") {
                res.pop();
            }
            else {
                res.push(std::stoi(s));
            }
        }

        int points = 0;
        while (!res.empty()) {
            points += res.top();
            res.pop();
        }

        return points;
    }
};
