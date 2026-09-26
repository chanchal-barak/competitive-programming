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
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        if(b-a>=c){
            cout<<b-a<<"\n";
        }
        else{
            cout<<a+c-b<<"\n";
        }
    }
    else{
        cout<<a+c-b<<"\n";
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}