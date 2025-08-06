#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                maxcount = max(maxcount, count);
                count = 0;
            }
        }

        maxcount = max(maxcount, count); 
        return maxcount;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Max consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}