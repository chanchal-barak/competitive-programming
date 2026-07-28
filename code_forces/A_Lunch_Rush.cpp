#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long ans = LLONG_MIN;
    while (n--) {
        long long f, t;
        cin >> f >> t;
        long long joy;
        if (t <= k)
            joy = f;
        else
            joy = f - (t - k);

        ans = max(ans, joy);
    }
    cout << ans << endl;

    return 0;
}