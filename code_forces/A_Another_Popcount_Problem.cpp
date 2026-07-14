#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        long long k;
        cin >> n >> k;

        long long ans = 0;
        long long cost = 1;

        while (cost <= n) {
            long long take = min(k, n / cost);
            ans += take;
            n -= take * cost;
            cost <<= 1;
        }

        cout << ans << '\n';
    }

    return 0;
}