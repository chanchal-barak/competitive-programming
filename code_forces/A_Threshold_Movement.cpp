#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n%2){
            cout<<"NO"<<endl;
            continue;
        }
        long long minodd=LLONG_MAX, maxeven=LLONG_MIN;
        for(int i=0;i<n;i++){
            if(i%2==0)
                minodd=min(minodd,a[i]);
            else
                maxeven=max(maxeven,a[i]);
        }
        if(minodd-maxeven>=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}