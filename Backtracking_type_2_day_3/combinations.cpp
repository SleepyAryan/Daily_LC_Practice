class Solution {
public:
    void helper(int n,int k,int current,vector<int>& ans,vector<vector<int>>& final_ans)
    {
        if(ans.size()==k)
        {
            final_ans.push_back(ans);
            return;
        }
        //step_1
        for(int i=current;i<n;i++)
        {
            //step_2
            ans.push_back(i+1);
            //step_3
            helper(n,k,i+1,ans,final_ans);
            //backtracking_step
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        vector<vector<int>>finalAns;
        helper(n,k,0,ans,finalAns);
        return finalAns;
    }
};