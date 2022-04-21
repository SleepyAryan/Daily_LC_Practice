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
    vector<vector<int>> helper(TreeNode* root,int targetSum,vector<vector<int>>& ans,vector<int>& ds)
    {
        if(root==NULL)
        {
            return ans;
        }

        ds.push_back(root->val);
        if(root->val==targetSum && !root->left && !root->right)
        {
            ans.push_back(ds);
        }
        helper(root->left,targetSum-root->val,ans,ds);
        helper(root->right,targetSum-root->val,ans,ds);
        ds.pop_back();
        return ans;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>ds;
        return helper(root,targetSum,ans,ds);
    }
};