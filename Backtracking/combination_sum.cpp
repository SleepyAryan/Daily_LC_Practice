class Solution {
public:
    int helper(vector<int>& candidates,int target,int current,vector<int>& ans,vector<vector<int>>& finalAns){
        if(current>=candidates.size() || target==0){
            finalAns.push_back(ans);
        }
        //step_1
        ans.push_back(candidates[current]);
        //step_2
        helper(candidates,target-nums[current],current,ans,finalAns);
        //backtracking_Step
        ans.pop_back();
        //step_3
        helper(candidates,taregt,current+1,ans,finalAns);
        return finalAns;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>finalAns;
        return helper(candidates,target,0,ans,finalAns);
    }
};