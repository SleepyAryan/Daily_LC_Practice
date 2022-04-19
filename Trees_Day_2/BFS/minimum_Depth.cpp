class Solution {
public:
    int minDepth(TreeNode* root) {
        //this is pretty self explanatory..if there is no root present we would obviously would return a 0..right
        if(root==NULL){
            return 0;
        }
        //basically depth of a binnary tree is length of the tree from the root node to its leaf node..one it finally reaches the leaf node it will just add 1 and wont make anymore recursive calls
        else if(!root->left && !root->right){
            return 1;
        }
        //suppose the tree has no left node..so it will just call the function for the right node and since it is moving forward we will just add a one to the value;
        else if(!root->left && root->right){
            return minDepth(root->right)+1;
        }
        //same as what we did in root->left recursive call but for the right node
        else if(root->left && !root->right){
            return minDepth(root->left)+1;
        }
        //now that iterations are over our final goal is to find the minnimum of either of it and add a 1
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
};
