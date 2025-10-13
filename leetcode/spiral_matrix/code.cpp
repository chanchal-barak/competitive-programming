#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        vector<int> ans;
        while (srow <= erow && scol <= ecol) {
            for (int j = scol; j <= ecol; j++)
                ans.push_back(mat[srow][j]);
            for (int i = srow + 1; i <= erow; i++)
                ans.push_back(mat[i][ecol]);
            if (erow > srow) {
                for (int j = ecol - 1; j >= scol; j--)
                    ans.push_back(mat[erow][j]);
            }
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--)
                    ans.push_back(mat[i][scol]);
            }
            srow++, erow--, scol++, ecol--;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(mat);

    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
