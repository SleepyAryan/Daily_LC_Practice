class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>final_ans;
        if(root==NULL){
            return final_ans;
        }
        while(!q.empty()){
            int s=q.size();
            vector<int>ans;
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            final_ans.push_back(ans);
        }
        reverse(final_ans.begin(),final_ans.end());
        return final_ans;
    }
};


//there is no involvement of any kind of algorithm here...its just there yk