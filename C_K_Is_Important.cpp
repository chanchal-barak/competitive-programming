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
    long long n,k;
    cin >> n >> k;
    vll a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long ans=0;
    while(a.size()>=k){
        int i=a.size();
        if(a[k-1]>=a[i-k]){
            ans+=a[k-1];
            a.erase(a.begin()+(k-1));
        } else {
            ans+=a[i-k];
            a.erase(a.begin()+(i-k));
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}