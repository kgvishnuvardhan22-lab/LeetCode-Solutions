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
void inorder(TreeNode* root,vector<int>&list){
    if(root==nullptr) return;
    inorder(root->left,list);
    list.push_back(root->val);
    inorder(root->right,list);

}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>list1;
        vector<int>list2;
        vector<int>ans;
        inorder(root1,list1);
        inorder(root2,list2);
        for(int i=0;i<list1.size();i++){
            ans.push_back(list1[i]);
        }
         for(int i=0;i<list2.size();i++){
           ans.push_back(list2[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};