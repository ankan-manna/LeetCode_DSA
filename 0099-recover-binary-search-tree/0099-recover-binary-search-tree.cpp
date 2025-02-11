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
    void inorder(TreeNode* root,vector<TreeNode*>&v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>v;
        inorder(root,v);
        TreeNode* a=NULL;
        TreeNode* b=NULL;
       for(int i=0;i<v.size()-1;i++){
        if(v[i]->val>v[i+1]->val){
            if(!a){
            a=v[i];
            }//no else due to sorted inorder of bst 
            b=v[i+1];
        }
       }
       if(a&&b)
        swap(a->val,b->val);
    }
};