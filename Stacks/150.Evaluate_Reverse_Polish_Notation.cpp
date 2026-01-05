class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> res;

        for (const string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int a = res.top();
                res.pop();
                int b = res.top();
                res.pop();
                
                if (s == "+") {
                    res.push(b + a);
                } else if (s == "-") {
                    res.push(b - a);
                } else if (s == "*") {
                    res.push(b * a);
                } else if (s == "/") {
                    res.push(b / a);
                }
            } else {
                res.push(stoi(s));
            }
        }
        
        return res.top();
    }
};
