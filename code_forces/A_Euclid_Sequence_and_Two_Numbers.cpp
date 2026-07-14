#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end(),greater<int>());
        vector<int> ans;
        for(int i=0;i<n-2;i+=2){
            if(v[i]%v[i+1]==v[i+2]){
                ans.push_back(v[i]);
                ans.push_back(v[i+1]);
                ans.push_back(v[i+2]);
            }
            if(v[i]>v[i+1]){
                ans.push_back(v[i]);
                ans.push_back(v[i+1]);
            }
        }
        if(ans.size()==0){
            cout << -1 << '\n';
        }else{
            for(int i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}