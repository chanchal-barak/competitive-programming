#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define pb push_back

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    map<int,int> freq;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    sort(all(a), greater<int>());
    vi b;
    for(int i=0;i<n;i++) {
        if(i==0 || a[i]!=a[i-1])
            b.pb(a[i]);
    }
    for(int i=0;i<n;i++) {
        if(freq[a[i]]>1) {
            b.pb(a[i]);
            freq[a[i]]--;
        }
    }

    for(int x:b)
        cout << x << " ";

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}