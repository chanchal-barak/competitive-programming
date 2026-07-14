#include <bits/stdc++.h>
using namespace std;

int luckydigit(int n){
    int ans=0;
    while(n>0){
        int rem=n%10;
        if(rem==4 || rem==7){
            ans++;
        }
        n/=10;
    }
    return ans;
}
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int ans=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(luckydigit(a[i])<=k){
            ans++;
        }
            
    }
    cout << ans << endl;
    return 0;
}