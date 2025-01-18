class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();  // Number of rows
        if (m == 0) return {};  // Handle empty matrix
        int n = matrix[0].size();  // Number of columns
        
        vector<int> output;  // To store the spiral order
        int count = 0;  // Index to track the number of elements added to output
        
        int i = 0;  // Layer index
        while (i < (min(m, n) + 1) / 2) {
            // Traverse from left to right in the top row of the current layer
            for (int j = i; j < n - i; j++) {
                output.push_back(matrix[i][j]);
                count++;
            }

            // Traverse from top to bottom in the rightmost column of the current layer
            for (int k = i + 1; k < m - i; k++) {
                output.push_back(matrix[k][n - i - 1]);
                count++;
            }

            // Traverse from right to left in the bottom row of the current layer (if applicable)
            if (m - i - 1 > i) {
                for (int l = n - i - 2; l >= i; l--) {
                    output.push_back(matrix[m - i - 1][l]);
                    count++;
                }
            }

            // Traverse from bottom to top in the leftmost column of the current layer (if applicable)
            if (n - i - 1 > i) {
                for (int o = m - i - 2; o > i; o--) {
                    output.push_back(matrix[o][i]);
                    count++;
                }
            }

            // Move to the next layer
            i++;
        }

        return output;
    }
};
