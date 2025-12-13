class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); ++i) {
            std::unordered_set<char> row;
            for (int j = 0; j < board.size(); ++j) {
                if (!isValidCell(board[i][j], row)) return false;
            }
        }

        for (int i = 0; i < board.size(); ++i) {
            std::unordered_set<char> col;
            for (int j = 0; j < board.size(); ++j) {
                if (!isValidCell(board[j][i], col)) return false;
            }
        }
        
        for (int i = 0; i < board.size(); ++i) {
            std::unordered_set<char> box;
            int row = (i / 3) * 3;
            int col = (i % 3) * 3;

            for (int j = row; j < row + 3; ++j) {
                for (int k = col; k < col + 3; ++k) {
                    if (!isValidCell(board[j][k], box)) return false;
                }
            }
        }

        return true;
    }
private:
    bool isValidCell(char val, std::unordered_set<char>& seen) {
        if (val == '.') return true;
        if (seen.count(val)) return false;

        seen.insert(val);

        return true;
    }
};
