#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') {
            st.push('(');
        } else {
            if(!st.empty() && st.top() == '(') {
                st.pop();
                count+=2;
            }
        }
    }
    cout << count << endl;
    return 0;
}