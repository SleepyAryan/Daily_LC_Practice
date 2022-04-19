class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        if(!p || !q){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

//in this problem what we are doing is...basically just DFS..first we are checking if both the trees are NULL...if yes then neither of the trees are present which means both are same..SO TRUE..if suppose one of them is present..this means other is absent SO FALSE..rest is self explanatory