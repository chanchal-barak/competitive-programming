#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;  // both NULL => true, one NULL => false
        }
        bool isRightSame = isSameTree(p->right, q->right);
        bool isLeftSame  = isSameTree(p->left, q->left);
        return isRightSame && isLeftSame && (p->val == q->val);
    }
};

int main() {
    Solution sol;

    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    bool result = sol.isSameTree(root1, root2);
    cout << (result ? "Trees are the same" : "Trees are different") << endl;

    return 0;
}
