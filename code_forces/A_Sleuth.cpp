#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = s.size() - 1; i >= 0; i--) {

        if (!isalpha(s[i])) continue;

        char ch = tolower(s[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y') {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

        break;
    }

    return 0;
}
