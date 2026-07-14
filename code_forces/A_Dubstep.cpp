#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool firstWord = true;
    for (int i = 0; i < s.size();) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (!firstWord) {
                cout << " ";
                firstWord = true;
            }
            i += 3;
        } else {
            cout << s[i];
            firstWord = false;
            i++;
        }
    }
    return 0;
}