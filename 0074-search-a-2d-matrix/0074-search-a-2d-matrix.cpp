class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            int m = matrix[mid].size();
            if(matrix[mid][0] <= target && target<=matrix[mid][m-1]){
                int low1 = 0;
                int high1 = m-1;
                while(low1<=high1){
                    int mid1 = (low1+high1)/2;
                    if(matrix[mid][mid1] == target){
                        return true;
                    }
                    else if(target < matrix[mid][mid1]){
                        high1 = mid1 - 1;
                    }
                    else{
                        low1 = mid1 + 1;
                    }
                }
                return false;
            }
            else if(target < matrix[mid][0]){
                high = mid -1;
            }
            else if(target > matrix[mid][m-1]){
                low = mid+1;
            }
        }
        return false;
    }
};