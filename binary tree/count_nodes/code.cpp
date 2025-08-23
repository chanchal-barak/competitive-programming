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
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftCount=countNodes(root->left);
    int rightCount=countNodes(root->right);
    return leftCount+rightCount+1;
}

int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(preorder);
    cout<<"Total number of nodes in the tree is: "<<countNodes(root)<<endl;
    return 0;
}