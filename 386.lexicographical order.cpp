class Solution {
public:
    vector<int> ans;
    
    void solve(int i, int n) {
        if (i > n) {
            return;
        }

        int cur = i;
        ans.push_back(cur);
        for (int j = 0; j <= 9; j++) {
            int temp = cur * 10 + j;
            solve(temp, n);
        }
    }

    vector<int> lexicalOrder(int n) {
        for (int i = 1; i <= 9; i++) {
            solve(i, n);
        }
        return ans;
    }
};
