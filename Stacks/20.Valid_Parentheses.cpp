class Solution {
public:
    bool isValid(string s) {
        std::stack<char> res;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                res.push(c);
            }
            else if (c == ')' || c == ']' || c == '}') {
                if (res.empty()) return false;

                char top = res.top();
                res.pop();
                
                if ((c == ')' && top != '(') || 
                    (c == ']' && top != '[') || 
                    (c == '}' && top != '{')) 
                {
                    return false;
                }
            }
        }

        return res.empty();
    }
};
