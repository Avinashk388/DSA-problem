class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
                    int n = grid.size();
        int total = n * n;
        vector<int> arr;

        // Step 1: Convert matrix -> single array
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(grid[i][j]);
            }
        }

        // Step 2: Apply your marking logic
        for (int i = 0; i < total; i++) {
            arr[i]--; // convert to 0-based index
        }

        for (int i = 0; i < total; i++) {
            arr[arr[i] % total] += total;
        }

        int missing = -1, repeated = -1;

        // Step 3: Identify missing and repeating
        for (int i = 0; i < total; i++) {
            int count = arr[i] / total;
            if (count == 0) missing = i + 1;
            else if (count == 2) repeated = i + 1;
        }

        return {repeated, missing};
        
    }
};