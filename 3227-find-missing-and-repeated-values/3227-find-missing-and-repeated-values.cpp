class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
                int n = grid.size();
        int total = n * n;

        unordered_set<int> seen;
        int repeated = -1;

        // Step 1: Find repeated number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                if (seen.count(num)) {
                    repeated = num;
                } else {
                    seen.insert(num);
                }
            }
        }

        // Step 2: Find missing number
        int missing = -1;
        for (int i = 1; i <= total; i++) {
            if (!seen.count(i)) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
        
    }
};