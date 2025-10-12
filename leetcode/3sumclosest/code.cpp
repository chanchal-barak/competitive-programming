#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; 
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                if (currentSum < target)
                    left++;
                else if (currentSum > target)
                    right--;
                else
                    return currentSum;
            }
        }

        return closestSum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << "Closest sum: " << obj.threeSumClosest(nums, target) << endl;
    return 0;
}
