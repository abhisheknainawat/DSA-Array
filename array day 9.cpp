//leetcode -69 sqrt

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int left = 1, right = x;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid == x / mid) {
                return mid;
            } else if (mid < x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size(), cols = mat[0].size();
        unordered_map<int, pair<int, int>> positionMap;
        vector<int> rowCount(rows, cols), colCount(cols, rows);

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                positionMap[mat[r][c]] = {r, c};
            }
        }

        for (int idx = 0; idx < arr.size(); ++idx) {
            int val = arr[idx];
            auto [row, col] = positionMap[val];

            if (--rowCount[row] == 0 || --colCount[col] == 0) {
                return idx;
            }
        }

        return -1;
    }
};

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long min_result = LLONG_MAX;  // Start with a large number for the minimum score.
        long long row1_sum = accumulate(grid[0].begin(), grid[0].end(), 0LL);  // Top row sum
        long long row2_sum = 0;  // Bottom row sum starts at 0.

        for (int i = 0; i < grid[0].size(); ++i) {
            row1_sum -= grid[0][i];  // Move the top player forward, subtract current value.
            min_result = min(min_result, max(row1_sum, row2_sum));  // Update the minimum of the max scores.
            row2_sum += grid[1][i];  // Move the bottom player forward, add current value.
        }

        return min_result;  // Return the minimum maximum score.
    }
};


leetcode 1765
class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int R = isWater.size();
        int C = isWater[0].size();
        vector<vector<int>> height(R, vector<int>(C, R + C)); // Initialize with a safe sentinel value

        // First pass: set water cells to 0 and propagate height from top-left to bottom-right
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (isWater[i][j] == 1) {
                    height[i][j] = 0; // Water cell has height 0
                } else {
                    if (i > 0) 
                        height[i][j] = min(height[i][j], height[i - 1][j] + 1); // Check from top
                    if (j > 0) 
                        height[i][j] = min(height[i][j], height[i][j - 1] + 1); // Check from left
                }
            }
        }

        // Second pass: propagate height from bottom-right to top-left
        for (int i = R - 1; i >= 0; i--) {
            for (int j = C - 1; j >= 0; j--) {
                if (i < R - 1) 
                    height[i][j] = min(height[i][j], height[i + 1][j] + 1); // Check from bottom
                if (j < C - 1) 
                    height[i][j] = min(height[i][j], height[i][j + 1] + 1); // Check from right
            }
        }

        return height;
    }
};