#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1005;

int n, m, a, b;
ll grid[MAXN][MAXN];
ll pref[MAXN][MAXN];
ll mn[MAXN][MAXN];
int used[MAXN][MAXN];

struct Node {
    int i, j;
    ll cost;
};

bool cmp(Node &A, Node &B) {
    if (A.cost != B.cost) return A.cost < B.cost;
    if (A.i != B.i) return A.i < B.i;
    return A.j < B.j;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> a >> b;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pref[i][j] = grid[i][j]
                + pref[i-1][j]
                + pref[i][j-1]
                - pref[i-1][j-1];
        }
    }

    vector<vector<ll>> row_min(n+1, vector<ll>(m+1));

    for (int i = 1; i <= n; i++) {
        deque<int> dq;
        for (int j = 1; j <= m; j++) {
            while (!dq.empty() && grid[i][dq.back()] >= grid[i][j])
                dq.pop_back();
            dq.push_back(j);

            if (dq.front() <= j - b)
                dq.pop_front();

            if (j >= b)
                row_min[i][j-b+1] = grid[i][dq.front()];
        }
    }
    for (int j = 1; j <= m - b + 1; j++) {
        deque<int> dq;
        for (int i = 1; i <= n; i++) {
            while (!dq.empty() && row_min[dq.back()][j] >= row_min[i][j])
                dq.pop_back();
            dq.push_back(i);

            if (dq.front() <= i - a)
                dq.pop_front();

            if (i >= a)
                mn[i-a+1][j] = row_min[dq.front()][j];
        }
    }

    vector<Node> all;

    for (int i = 1; i + a - 1 <= n; i++) {
        for (int j = 1; j + b - 1 <= m; j++) {
            int x2 = i + a - 1;
            int y2 = j + b - 1;

            ll sum = pref[x2][y2]
                   - pref[i-1][y2]
                   - pref[x2][j-1]
                   + pref[i-1][j-1];

            ll cost = sum - mn[i][j] * a * b;

            all.push_back({i, j, cost});
        }
    }

    sort(all.begin(), all.end(), cmp);

    vector<tuple<int,int,ll>> ans;

    for (auto &node : all) {
        int i = node.i;
        int j = node.j;

        bool ok = true;

        for (int x = i; x < i + a && ok; x++) {
            for (int y = j; y < j + b; y++) {
                if (used[x][y]) {
                    ok = false;
                    break;
                }
            }
        }

        if (!ok) continue;

        for (int x = i; x < i + a; x++) {
            for (int y = j; y < j + b; y++) {
                used[x][y] = 1;
            }
        }

        ans.push_back({i, j, node.cost});
    }

    cout << ans.size() << "\n";
    for (auto &t : ans) {
        cout << get<0>(t) << " "
             << get<1>(t) << " "
             << get<2>(t) << "\n";
    }

    return 0;
}