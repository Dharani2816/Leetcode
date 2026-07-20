class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<int, int> hash;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (hash.contains(board[i][j])) {
                        return false;
                    }
                    hash[board[i][j]]++;
                }
            }
            hash.clear();
        }

        for (int i = 0; i < 9; i++) {
            unordered_map<int, int> hash;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    if (hash.contains(board[j][i])) {
                        return false;
                    }
                    hash[board[j][i]]++;
                }
            }
            hash.clear();
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                unordered_map<int, int> hash;
                for (int i1 = i; i1 < (i + 3); i1++) {
                    for (int j1 = j; j1 < (j + 3); j1++) {
                        if (board[j1][i1] != '.') {
                            if (hash.contains(board[j1][i1])) {
                                return false;
                            }
                            hash[board[j1][i1]]++;
                        }
                    }
                }
                hash.clear();
            }
        }
        return true;
    }
};