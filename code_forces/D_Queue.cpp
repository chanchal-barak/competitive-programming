#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    sort(t.begin(), t.end());
    queue<long long> q;
    for (long long x : t)
        q.push(x);

    long long wait = 0;
    int ans = 0;

    while (!q.empty()) {
        long long cur = q.front();
        q.pop();

        if (wait <= cur) {
            ans++;
            wait += cur;
        }
    }
    cout << ans << endl;
    return 0;
}