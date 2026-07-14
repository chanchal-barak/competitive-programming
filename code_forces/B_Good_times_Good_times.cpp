#include <iostream>
#include <string>

using namespace std;

bool is_good(long long n) {
    int mask = 0;
    while (n > 0) {
        mask |= (1 << (n % 10));
        n /= 10;
    }
    return __builtin_popcount(mask) <= 2;
}

void solve() {
    long long x;
    cin >> x;
    
    long long y = 2;
    while (true) {
        if (is_good(y) && is_good(x * y)) {
            cout << y << "\n";
            return;
        }
        y++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}