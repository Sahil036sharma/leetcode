class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);  
        return countWays(n, dp);
    }

    int countWays(int n, vector<int>& dp) {
        if (n <= 1) return 1;  
        if (dp[n] != -1) return dp[n]; 
        dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);  
        return dp[n];   
    }
};