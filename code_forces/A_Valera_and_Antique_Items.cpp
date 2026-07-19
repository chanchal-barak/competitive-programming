#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    vector<int> ans;

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;

        bool ok = false;
        while (k--) {
            int price;
            cin >> price;
            if (price < v)
                ok = true;
        }

        if (ok)
            ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for (int x : ans)
        cout << x << " ";

    return 0;
}