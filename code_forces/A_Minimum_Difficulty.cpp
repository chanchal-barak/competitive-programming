#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;

    for(int remove = 1; remove <= n-2; remove++) {

        int prev = a[0];
        int mx = 0;

        for(int i = 1; i < n; i++) {

            if(i == remove)
                continue;

            mx = max(mx, a[i] - prev);
            prev = a[i];
        }

        ans = min(ans, mx);
    }

    cout << ans;

    return 0;
}