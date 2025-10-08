class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

        int top=0,right=col-1,bottom=row-1,left=0;

        while (top <= bottom && left <= right) {

            // 1️⃣ Left → Right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++; // top row done

            // 2️⃣ Top → Bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // right column done

            // 3️⃣ Right → Left (agar rows bachi hain)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // bottom row done
            }

            // 4️⃣ Bottom → Top (agar columns bache hain)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // left column done
            }
        }
        return ans;
        
    }
};