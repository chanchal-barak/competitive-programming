#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool changed = true;

        while (changed) {
            changed = false;

            for (int i = 1; i < n - 1; i++) {
                if ((abs(a[i - 1]) % 2) == (abs(a[i + 1]) % 2)) {
                    long long nxt = a[i - 1] - a[i] + a[i + 1];

                    if (nxt < a[i]) {
                        a[i] = nxt;
                        changed = true;
                    }
                }
            }
        }

        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}