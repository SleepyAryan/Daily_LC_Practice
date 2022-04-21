class Solution {
public:
    TreeNode* mergedTrees(TreeNode* root1, TreeNode* root2){
        //if root1 is NULLed then just return the root2
        if(root1==NULL and root2!=NULL){
            return root2;
        }
        //if root2 is NULLed then just return the root1
        if(root1!=NULL and root2==NULL){
            return root1;
        }
        if(root1==NULL and root2==NULL){
            return NULL;
        }
        //make a new Node add the values of the left node and the right node
        TreeNode* temp = new TreeNode(root1->val+root2->val);
        //recursively do the same for the left
        temp->left=mergedTrees(root1->left,root2->left);
        //recursively do the same for rright
        temp->right=mergedTrees(root1->right,root2->right);
        return temp;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return mergedTrees(root1,root2);
    }
};

//