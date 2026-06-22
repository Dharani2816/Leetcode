class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // 00 01 02 | 20 10 00
        // 10 11 12 | 21 11 01
        // 20 21 22 | 22 12 02
        //[i][j] = [j][(n-1)-i]
        int n = matrix.size();
        vector<vector<int>> matrix1(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix1[j][(n - 1) - i] = matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = matrix1[i][j];
            }
        }
    }
};