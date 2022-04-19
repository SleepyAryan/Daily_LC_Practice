class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
       queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        while(!q.empty())
        {
            long temp=0;
            int s=q.size();
             for(int i=0;i<s;i++)
             {
                TreeNode* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                temp+=t->val;
            }
            ans.push_back((double)temp/s);
        }
        return ans;
    }
};


// this is basically BFS(level order traversal)..but summing up the values and finally finding the average