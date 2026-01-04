class Solution {
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();             // gives me the row
        int n = matrix[0].size(); // gives me the column
        vector<int> spiralMatrix;

        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {  // moves from left to right
                spiralMatrix.push_back(matrix[top][i]);
            }
            top++;  // moves one step further the top

            for (int i = top; i <= bottom; i++) {  // moves from top to bottom
                spiralMatrix.push_back(matrix[i][right]);
            }
            right--;  // moves the right pointer one side to the left

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {  // right to left movemet
                    spiralMatrix.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top;
                     i--) {  // moves  from bottom to top
                    spiralMatrix.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return spiralMatrix;
    }
};