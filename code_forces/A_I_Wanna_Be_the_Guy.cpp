#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> st;

    int p, x;
    cin >> p;
    while (p--) {
        cin >> x;
        st.insert(x);
    }

    int q;
    cin >> q;
    while (q--) {
        cin >> x;
        st.insert(x);
    }

    if (st.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}