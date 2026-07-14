#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = n;

        int i = 0;
        while (i < n) {
            int j = i;

            while (j + 1 < n && v[j + 1] == v[i]) {
                j++;
            }
            int left = i;
            int right = n - j - 1;
            ans = min(ans, max(left, right));
            if (j + 1 < n) {
                left = j + 1;
                right = n - (j + 1);
                ans = min(ans, max(left, right));
            }

            i = j + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}