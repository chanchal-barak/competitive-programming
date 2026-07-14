#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        int cnt2 = 0;
        bool ok = false;
        for(int j=0;j<k;j++){
            int x;
            cin >> x;
            if (x >= 3) ok = true;
            if (x >= 2) cnt2++;
        }
         if (ok || cnt2 >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}