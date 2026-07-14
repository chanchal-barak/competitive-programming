#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            if(ispalindrome(to_string(i)) && (n-i)%12==0){
                cout << i << " " << n-i << '\n';
                break;                
            }
            if(ispalindrome(to_string(n-i)) && (i)%12==0){
                cout << n-i << " " << i << '\n';
                break;                
            }
        }
    }

    return 0;
}