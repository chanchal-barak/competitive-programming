#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
};
int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=sumNodes(root->left);
    int rightSum=sumNodes(root->right);
    return leftSum+rightSum+root->data;
}
int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Sum of all nodes in the tree is: "<<sumNodes(root)<<endl;
    return 0;
}