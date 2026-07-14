class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // the optimal approach is starting at last column at the first row and moving to next row if target is greater and moving to previous column if target is lesser
        int row = 0;
        int column = matrix[0].size()-1;
        while(row < matrix.size() && column >= 0){
            if(matrix[row][column] == target){
                return true;
            }
            else if(matrix[row][column] > target){
                column--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};