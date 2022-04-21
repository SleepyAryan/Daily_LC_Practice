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
        //check if the root ka value is equal and also check for the left node and the right node
        return root->val==subRoot->val and equal(root->left,subRoot->left) and equal(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //this is generic stuff...
        if(!root and !subRoot){
            return true;
        }
        if(!root or !subRoot){
            return false;
        }
        //check if its equal and also theres a high chance that its not equal so just push the left and the right
        return equal(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};