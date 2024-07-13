#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string arr[10] = {".",   ".",   "abc",  "def", "ghi",
                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void solve(string& s, string& output, int i, int n,
               vector<string>& result) {
        if (i == n) {
            result.push_back(output);
            return;
        }
        int digit = s[i] - '0';
        string temp = arr[digit];
        for (int j = 0; j < temp.size(); j++) {
            output.push_back(temp[j]);
            solve(s, output, i + 1, n, result);
            // backtrack
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digit) {
        vector<string> results;
        if (digit.empty())
            return results; // return empty vector if input is empty

        int n = digit.size();
        string output = "";
        solve(digit, output, 0, n, results);
        return results;
    }
};

