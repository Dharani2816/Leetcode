class Solution {
public:
    bool canPlaceQueen(int row, int col, vector<string>& a,int n) {
        for (int i = 0; i < row; i++) {
            if (a[i][col] == 'Q') {
                return false;
            }
        }

        for (int i = 0; i < col; i++) {
            if (a[row][i] == 'Q')
                return false;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 'Q') {
                    if (abs(i - row) == abs(j - col))
                        return false;
                }
            }
        }
        return true;
    }
    void generate(int row, int n, vector<string>& a,
                  vector<vector<string>>& result) {
        if (row == n) {
            result.push_back(a);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (canPlaceQueen(row, i, a,n)) {
                a[row][i] = 'Q';
                generate(row + 1, n, a, result);
                a[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> a(n, string(n, '.'));
        generate(0, n, a, result);
        return result;
    }
};