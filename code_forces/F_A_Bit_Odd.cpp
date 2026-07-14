#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        static char buf[200005];
        scanf("%s", buf);
        string s(buf, buf + n);

        int L = -1, R = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){ L = i; break; }
        }
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '0'){ R = i; break; }
        }

        bool fwin;
        if(L == -1 || R == -1 || L > R){
            fwin = false; // no possible move at all
        } else {
            bool allEven = true;
            int i = L;
            while(i <= R){
                int j = i;
                char c = s[i];
                while(j <= R && s[j] == c) j++;
                int len = j - i;
                if(len % 2 != 0) allEven = false;
                i = j;
            }
            fwin = !allEven;
        }

        printf("%s\n", fwin ? "Alice" : "Bob");
    }
    return 0;
}