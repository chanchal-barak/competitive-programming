#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totcost = 0, totgas = 0, start = 0, currgas = 0;
        for (int i = 0; i < gas.size(); i++) {
            totgas += gas[i];
            totcost += cost[i];
            currgas += gas[i] - cost[i];
            if (currgas < 0) {
                start = i + 1;
                currgas = 0;
            }
        }
        return totgas < totcost ? -1 : start;
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int result = sol.canCompleteCircuit(gas, cost);
    cout << "Starting station index: " << result << endl;

    return 0;
}
