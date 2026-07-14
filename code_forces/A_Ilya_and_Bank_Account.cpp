#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n;
    } else {
        int removeLast = n / 10;
        int removeSecondLast = (n / 100) * 10 + (n % 10);
        cout << max(n, max(removeLast, removeSecondLast));
    }

    return 0;
}