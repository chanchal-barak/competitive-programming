#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    int sum1 = 0, sum2 = 0;

    int st = 0, end = n - 1;

    while (st < end) {
        if ((str[st] == '4' || str[st] == '7') &&
            (str[end] == '4' || str[end] == '7')) {

            sum1 += str[st] - '0';
            sum2 += str[end] - '0';
        } else {
            cout << "NO";
            return 0;
        }

        st++;
        end--;
    }

    cout << (sum1 == sum2 ? "YES" : "NO");

    return 0;
}