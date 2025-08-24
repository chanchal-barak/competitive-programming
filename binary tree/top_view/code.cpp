#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
void topView(Node* root){
    if(root==NULL){
        return; 
    }
    queue<pair<Node*,int>>q;
    map<int,int>topNode;
    int minHd=0,maxHd=0;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int hd=it.second;
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=node->data;
        }
        if(node->left){
            q.push({node->left,hd-1});
            minHd=min(minHd,hd-1);
        }
        if(node->right){
            q.push({node->right,hd+1});
            maxHd=max(maxHd,hd+1);
        }
        for(int i=minHd;i<=maxHd;i++){
            cout<<topNode[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    vector<int>preorder={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(preorder);
    topView(root);
    return 0;
}