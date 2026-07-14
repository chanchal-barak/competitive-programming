#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }

        if (j == target.size()) {
            break;
        }
    }

    cout << (j == target.size() ? "YES" : "NO");

    return 0;
}