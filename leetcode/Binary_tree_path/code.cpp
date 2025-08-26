#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void allPath(TreeNode* root, string path, vector<string>& ans) {
        if (!root->left && !root->right) {
            ans.push_back(path);
            return;
        }
        if (root->left) {
            allPath(root->left, path + "->" + to_string(root->left->val), ans);
        }
        if (root->right) {
            allPath(root->right, path + "->" + to_string(root->right->val), ans);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if (!root) return ans;
        string path = to_string(root->val);
        allPath(root, path, ans);
        return ans;
    }
};

// Example usage
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);

    for (auto &p : paths) {
        cout << p << endl;
    }

    return 0;
}
