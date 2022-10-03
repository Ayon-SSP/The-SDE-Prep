class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        helper(matrix, 0, 0, matrix.size());
    }
    
    void helper(vector<vector<int>>& matrix, int row, int col, int size) {
        if (size == 0 || size == 1) return;
        int step = 0;
        while(step < size - 1){
            swap(matrix[row][col + step], matrix[row + step][col + size - 1]);
            swap(matrix[row][col + step], matrix[row + size - 1 - step][col]);
            swap(matrix[row + size - 1][col + size - 1 - step], matrix[row + size - 1 - step][col]);
            step++;
        }
        helper(matrix, row + 1, col + 1, size - 2);
    }
};