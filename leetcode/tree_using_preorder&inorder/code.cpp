#include <bits/stdc++.h>
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
    int insearch(vector<int>& inorder, int left, int right, int val) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == val) return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int &preIDX, int left, int right) {
        if (left > right) return nullptr;
        TreeNode* root = new TreeNode(preorder[preIDX]);
        int inIDX = insearch(inorder, left, right, preorder[preIDX]);
        preIDX++;
        root->left = helper(preorder, inorder, preIDX, left, inIDX - 1);
        root->right = helper(preorder, inorder, preIDX, inIDX + 1, right);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIDX = 0;
        return helper(preorder, inorder, preIDX, 0, inorder.size() - 1);
    }
};

int main() {
    Solution sol;
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    TreeNode* root = sol.buildTree(preorder, inorder);
    function<void(TreeNode*)> printInorder = [&](TreeNode* node) {
        if (!node) return;
        printInorder(node->left);
        cout << node->val << " ";
        printInorder(node->right);
    };
    printInorder(root);
    return 0;
}
