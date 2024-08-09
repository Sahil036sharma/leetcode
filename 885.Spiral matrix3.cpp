#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        int totalCells = rows * cols;
        int step = 1; 
        int x = rStart, y = cStart; 
        int dir = 0; 
        
        result.push_back({x, y});
        
        while (result.size() < totalCells) {
            for (int i = 0; i < 2; ++i) { 
                for (int j = 0; j < step; ++j) {
                    x += directions[dir][0];
                    y += directions[dir][1];
                    
                    if (x >= 0 && x < rows && y >= 0 && y < cols) {
                        result.push_back({x, y});
                    }
                }
                dir = (dir + 1) % 4; 
            }
            step++;
        }
        
        return result;
    }
};