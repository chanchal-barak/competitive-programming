#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long c;
        cin >> c;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<long long> dp(n + 1, LLONG_MIN);

        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1] + a[i] - c;

            if (i >= 2) {
                dp[i] = max(dp[i],
                            dp[i - 2] + max(a[i], a[i - 1]) - c);
            }
        }

        cout << dp[n] << '\n';
    }
    return 0;
}