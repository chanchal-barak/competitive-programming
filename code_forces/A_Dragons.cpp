#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }
    sort(dragons.begin(), dragons.end());
    for (auto dragon : dragons) {
        if (s > dragon.first) {
            s += dragon.second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}