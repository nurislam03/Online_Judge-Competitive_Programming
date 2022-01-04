class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row; i++) {
            if(target <= matrix[i][col-1]) {
                for(int j = 0; j < col; j++) {
                    if(matrix[i][j] == target) return true;
                }
                return false;
            }
        }
        return false;
    }
};