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
    bool equal(TreeNode* root,TreeNode* subRoot){
        if(!root and !subRoot){
            return true;
        }
        if(!root or !subRoot){
            return false;
        }
        return root->val==subRoot->val and equal(root->left,subRoot->left) and equal(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root and !subRoot){
            return true;
        }
        if(!root or !subRoot){
            return false;
        }
        return equal(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};