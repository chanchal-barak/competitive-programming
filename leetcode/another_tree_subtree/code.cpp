#include <iostream>
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
    bool isIdentical(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;  
        }
        bool isRightSame = isIdentical(p->right, q->right);
        bool isLeftSame  = isIdentical(p->left, q->left);
        return isRightSame && isLeftSame && (p->val == q->val);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL || subRoot == NULL) {
            return root == subRoot;
        }
        if (root->val == subRoot->val && isIdentical(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main() {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    Solution sol;
    cout << (sol.isSubtree(root, subRoot) ? "true" : "false") << endl;

    return 0;
}
