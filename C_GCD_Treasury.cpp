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
int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve() {
    int n,x;
    cin >> n >> x;
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
        //sort(all(a));
    int ans=0;
    for(int i=0;i<n;i++){
        int g=gcd(a[i],x);
        if(g==1) {
            continue;
        }else {
            ans+=g;
            x=g;
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