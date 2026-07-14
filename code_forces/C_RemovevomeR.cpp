#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int changes = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                changes++;
        }

        int minwf;

        if (changes == 1)
            minwf = 2;
        else
            minwf = 1;

        cout << minwf << '\n';
    }

    return 0;
}