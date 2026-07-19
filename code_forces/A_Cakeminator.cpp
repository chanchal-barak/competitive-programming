#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> cake(r);

    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }

    int safeRows = 0;
    int safeColumns = 0;
    for (int i = 0; i < r; i++) {
        bool hasStrawberry = false;

        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                hasStrawberry = true;
                break;
            }
        }

        if (!hasStrawberry) {
            safeRows++;
        }
    }
    for (int j = 0; j < c; j++) {
        bool hasStrawberry = false;

        for (int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                hasStrawberry = true;
                break;
            }
        }

        if (!hasStrawberry) {
            safeColumns++;
        }
    }

    int answer = safeRows * c
               + safeColumns * r
               - safeRows * safeColumns;

    cout << answer;

    return 0;
}