#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long power = n; 

        if (power == 0) return 1;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        if (power % 2 == 0) {
            return myPow(x * x, power / 2);
        } else {
            return x * myPow(x, power - 1);
        }
    }
};

int main() {
    Solution sol;
    
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    double result = sol.myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}
