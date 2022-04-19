class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      queue<TreeNode*>q;
        q.push(root);
        vector<int>final_ans;
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
            final_ans.push_back(ans[s-1]);
        }
        return final_ans;
    }
};

//simple bfs..only change in left side view is..just reverse the answer vector and add the values in 