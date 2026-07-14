#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programmer, maths, sports;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 1)
            programmer.push_back(i);
        else if (x == 2)
            maths.push_back(i);
        else
            sports.push_back(i);
    }

    int teams = min({(int)programmer.size(),
                     (int)maths.size(),
                     (int)sports.size()});

    cout << teams << "\n";

    for (int i = 0; i < teams; i++) {
        cout << programmer[i] << " "
             << maths[i] << " "
             << sports[i] << "\n";
    }

    return 0;
}