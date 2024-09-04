#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int index = 0;
        int n = s.length();
        while (index < n && isspace(s[index])) {
            index++;
        }
        int sign = 1;
        if (index < n && (s[index] == '-' || s[index] == '+')) {
            if (s[index] == '-') {
                sign = -1;
            }
            index++;
        }
        long long result = 0;
        while (index < n && isdigit(s[index])) {
            result = result * 10 + (s[index] - '0');
            if (result * sign > numeric_limits<int>::max()) {
                return numeric_limits<int>::max();
            }
            if (result * sign < numeric_limits<int>::min()) {
                return numeric_limits<int>::min();
            }
            index++;
        }
        return static_cast<int>(result * sign);
    }
};