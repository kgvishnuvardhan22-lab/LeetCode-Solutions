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
    void inorder(TreeNode* root,priority_queue<int, vector<int>, greater<int>>& pq)
    {
        if(root==NULL) return;
        inorder(root->left,pq);
        pq.push(root->val);
        inorder(root->right,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        inorder(root,pq);
        int i=0;
        int ans;
        while(i<k)
        {
            ans=pq.top();
            pq.pop();
            i++;
        }
        return ans;
    }
};