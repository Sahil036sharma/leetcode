#include <iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;
    
    // Test cases
    cout << "Fibonacci of 2: " << sol.fib(2) << endl;
    cout << "Fibonacci of 3: " << sol.fib(3) << endl;
    cout << "Fibonacci of 4: " << sol.fib(4) << endl;
    
    return 0;
}