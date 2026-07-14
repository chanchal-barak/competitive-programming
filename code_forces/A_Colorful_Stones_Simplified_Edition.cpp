#include <iostream>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int ans=0;
    for(int i=0;i<t.size();i++){
        if(s[ans]==t[i]){
            ans++;
        }
    }
    cout << ans+1 << endl;
    return 0;
}