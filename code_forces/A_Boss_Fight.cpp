#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> ans(n);
        map<int, int> freq;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> ans[i];
            freq[ans[i]]++;
            sum += ans[i];
        }

        int mxFreq = 0;
        int mxVal = 0;

        for (auto &[val, f] : freq) {
            if (f > mxFreq) {
                mxFreq = f;
                mxVal = val;
            }
        }

        int others = n - mxFreq;
        if (mxFreq <= others + 1) {
            cout << sum << "\n";
        } else {
            long long otherSum = sum - 1LL * mxFreq * mxVal;
            long long usedCopies = min(mxFreq, others + 2);
            cout << otherSum + usedCopies * mxVal << "\n";
        }
    }
    return 0;
}