/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void inorder(TreeNode* root,vector<int>& v)
{
    if(root==nullptr) return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
    
}
    TreeNode* balance(vector<int>v,int left,int right){
        if(left>right) return nullptr;
        int mid=left+(right-left)/2;
        TreeNode* t=new TreeNode(v[mid]);
        t->left=balance(v,left,mid-1);
        t->right=balance(v,mid+1,right);
        return t;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return balance(v,0,v.size()-1);
    }
};