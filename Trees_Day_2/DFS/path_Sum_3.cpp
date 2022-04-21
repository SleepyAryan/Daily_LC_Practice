class Solution {
public:
    
    int pathSumHelper(TreeNode* root,long long currentSum,int targetSum,unordered_map<int,int> &prefixSum){
        if(root==NULL) return 0;
        // include the current node in the path
		currentSum += root->val;
        // num of paths ending at current node with sum as targetSum
        int numPathTillCurrent = prefixSum[currentSum-targetSum];
        prefixSum[currentSum]++;
        // recursively do the same for children as well
        int result = numPathTillCurrent + pathSumHelper(root->left,currentSum,targetSum,prefixSum)+
            pathSumHelper(root->right,currentSum,targetSum,prefixSum);
        // removing the node from the current path.
        prefixSum[currentSum]--;
        return result;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<int,int> prefixSum;
        prefixSum[0]++;
        return pathSumHelper(root,0,targetSum,prefixSum);
    }
};