#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int i=0,j=n-1;
    int ans=0;
    while(i<j){
        if(s[i] != s[j]) {
            if(s[i] != c && s[j] != c) {
                ans+=2;
            } else if(s[i] != c || s[j] != c) {
                ans+=1;
            }
        }
        i++;
        j--;
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