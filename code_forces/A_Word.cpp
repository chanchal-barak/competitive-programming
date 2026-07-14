#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(isupper(c)){
            u++;
        } else {
            l++;
        }
    }
    if(u > l){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}