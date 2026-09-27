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

int sumdigits(int n) {
    int sum=0, rem;
    while(n>0) {
        rem=n%10;
        sum+=rem*rem;
        n/=10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    vll a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long cnt=0;
    for(int t=0;t<100;t++) {
        for(int i=0;i<n;i++) {
            if(a[i]==1 ) continue;
            a[i]=sumdigits(a[i]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}