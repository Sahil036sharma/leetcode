class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();  
        int m = matrix.size();    
        int left = 0, right = m * n - 1;

        while (left <= right) {  
            int mid = left + (right - left) / 2; 
            int midelement = matrix[mid / n][mid % n];  

            if (midelement == target) {
                return true;  
            } 
            else if (midelement < target) {
                left = mid + 1;  
            } 
            else {
                right = mid - 1;  
            }
        }
        return false;  
    }
};
