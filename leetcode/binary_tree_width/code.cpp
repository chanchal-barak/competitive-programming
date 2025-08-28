#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});
        int maxWidth = 0;
        
        while (!q.empty()) {
            int size = q.size();
            unsigned long long stIdx = q.front().second;
            unsigned long long endIdx = q.back().second;
            maxWidth = max(maxWidth, (int)(endIdx - stIdx + 1));
            
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                unsigned long long idx = curr.second - stIdx; 
                if (curr.first->left) {
                    q.push({curr.first->left, idx * 2 + 1});
                }
                if (curr.first->right) {
                    q.push({curr.first->right, idx * 2 + 2});
                }
            }
        }
        return maxWidth;
    }
};

int main() {
    Solution sol;

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);

    cout << "Maximum Width of Binary Tree: " << sol.widthOfBinaryTree(root) << endl;

    return 0;
}
