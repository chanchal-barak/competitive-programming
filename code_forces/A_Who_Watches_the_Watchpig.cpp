#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;
        int flip = 0;
        string s;
        cin >> s;
        if (2 * k > n) {
            cout << -1 << '\n';
            continue;
        }
        for(int j=0;j<k;j++){
            if(s[j]=='L'){
                flip++;
            }
        }
        for(int j=n-1;j>=n-k;j--){
            if(s[j]=='R'){
                flip++;
            }
        }
        cout << flip << '\n';
    }
    return 0;
}