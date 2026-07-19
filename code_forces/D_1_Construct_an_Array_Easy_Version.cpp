#include <bits/stdc++.h>
using namespace std;

static const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> sign(n + 1, -1);

        struct Edge {
            int o, i, j;
        };
        vector<Edge> edges;
        edges.reserve(m);

        bool ok = true;

        for (int k = 0; k < m; k++) {
            int o, i, j;
            cin >> o >> i >> j;
            edges.push_back({o, i, j});

            if (i == j) {
                if (o == 1)
                    sign[i] = 0;
                else
                    sign[i] = 1;
            }
        }

        vector<int> idPos(n + 1, -1), idNeg(n + 1, -1);
        int P = 0, N = 0;

        for (int i = 1; i <= n; i++) {
            if (sign[i] == 0)
                idPos[i] = P++;
            else
                idNeg[i] = N++;
        }

        int V = P + N;
        vector<vector<pair<int,int>>> g(V);

        for (auto &e : edges) {
            int i = e.i, j = e.j;
            if (i == j) continue;

            if (sign[i] == sign[j]) {
                if (sign[i] == 0) {
                    if (e.o == 2) ok = false;
                } else {
                    if (e.o == 1) ok = false;
                }
                continue;
            }

            int posIdx, negIdx;
            if (sign[i] == 0) {
                posIdx = idPos[i];
                negIdx = idNeg[j];
            } else {
                posIdx = idPos[j];
                negIdx = idNeg[i];
            }

            int A = posIdx;
            int B = P + negIdx;

            if (e.o == 1) {
                // A >= B
                g[B].push_back({A, 0});
            } else {
                // A < B
                g[A].push_back({B, 1});
            }
        }

        if (!ok) {
            cout << "NO\n";
            continue;
        }

        vector<long long> val(V, 0);
        vector<int> inq(V, 1), cnt(V, 0);
        queue<int> q;

        for (int i = 0; i < V; i++) q.push(i);

        bool bad = false;

        while (!q.empty() && !bad) {
            int u = q.front();
            q.pop();
            inq[u] = 0;

            for (auto [v, w] : g[u]) {
                if (val[v] < val[u] + w) {
                    val[v] = val[u] + w;
                    cnt[v] = cnt[u] + 1;
                    if (cnt[v] >= V) {
                        bad = true;
                        break;
                    }
                    if (!inq[v]) {
                        inq[v] = 1;
                        q.push(v);
                    }
                }
            }
        }

        if (bad) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<long long> ans(n + 1);

        for (int i = 1; i <= n; i++) {
            if (sign[i] == 0) {
                ans[i] = val[idPos[i]];
            } else {
                ans[i] = -(val[P + idNeg[i]] + 1);
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }

    return 0;
}