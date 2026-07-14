#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi=0,mini=n-1;
    for(int i=0;i<n;i++){
        if(a[i]>a[maxi]){
            maxi=i;
        }
        if(a[i]<=a[mini]){
            mini=i;
        }
    }

    int ans=maxi+(n-1-mini);
    if(maxi>mini){
        ans--;
    }
    cout<<ans<<'\n';
}