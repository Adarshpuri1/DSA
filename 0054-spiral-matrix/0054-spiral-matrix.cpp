class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols= matrix[0].size();
        vector<int> arr;
        int firstRow=0;
        int lastRow=rows-1;
        int firstCol=0;
        int lastCol=cols-1;
        while (firstRow <= lastRow && firstCol <= lastCol){
            // 1. Left to Right
            for(int j=firstCol; j<=lastCol; j++){
                arr.push_back(matrix[firstRow][j]);
            }
            firstRow++;
            // 2. Top -> Bottom
            for(int j=firstRow; j<=lastRow; j++){
                arr.push_back(matrix[j][lastCol]);
            }
            lastCol--;

             // 3. Right -> Left
            if(firstRow<=lastRow){
                for(int j=lastCol; j>=firstCol; j--){
                    arr.push_back(matrix[lastRow][j]);
                }
                lastRow--;
            }
             // 4. Bottom -> Top
            if(firstCol<=lastCol){
                for(int i=lastRow; i>=firstRow; i--){
                    arr.push_back(matrix[i][firstCol]);
                }
                firstCol++;
            }
        }
        return arr;
    }
};