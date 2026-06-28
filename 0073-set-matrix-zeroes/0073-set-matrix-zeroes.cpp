class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // the optimal approach is instead of using a seperate row or column
        // matrix use the first row of the matrix for the columns and first
        // column of the matrix for marking rows as zero and seperate two
        // boolean for first row and first column
        bool firstRow = false;
        bool firstColumn = false;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[0][i] == 0) firstRow = true; 
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0) firstColumn = true;
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                        matrix[0][j] = 0;
                        matrix[i][0] = 0;
                }
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if (firstRow) {
            for (int i = 0; i < n; i++)
                matrix[0][i] = 0;
        }
        if(firstColumn){
             for (int j = 0; j < m; j++)
                matrix[j][0] = 0;
        }
    }
};