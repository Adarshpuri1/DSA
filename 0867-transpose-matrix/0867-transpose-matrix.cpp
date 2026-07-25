class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> arr(cols, vector<int>(rows));
        for(int row=0; row<rows; row++){
            for(int col=0; col<cols; col++){
                arr[col][row]=matrix[row][col];
            }
        }
        return arr;
    }
};