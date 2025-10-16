class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

// Step 1: Transpose
for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
}

// Step 2: Reverse each row
for (int i = 0; i < n; i++) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(matrix[i][start], matrix[i][end]);
        start++;
        end--;
    }
}

        
    }
};