#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = s[i] - '0';
        int sum = accumulate(a.begin(), a.end(), 0);
        if (a[0] == 1) {
            cout << n - sum << '\n';
            continue;
        }
        int ans = n + 1, cur = 0;
        for (int i = 0; i < n; i++) {
            cur += a[i];
            ans = min(ans, cur + n - i - 1 - sum + cur);
        }
        cout << ans << '\n';
    }
}
