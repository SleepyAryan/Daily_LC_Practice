class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        //this is the base case..
        if(root == NULL)
        {
            return false;
        }
        //this is the case in which the case is satisfied
        if(root->left == NULL && root->right == NULL && root->val - targetSum == 0)
        {
            return true;
        }
        //this is both trees case..we will check
        bool left = hasPathSum(root->left,targetSum - root->val);
        bool right = hasPathSum(root->right,targetSum - root->val);
        
        return left || right;
    }
};

//this is the exact way we solve the problem in case of dynamic programming..