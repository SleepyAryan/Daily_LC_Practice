class Solution {
public:
    void helper(vector<int>& nums,vector<int>& ds,vector<vector<int>>& final_ans,int current){
        if(current==nums.size()){
            final_ans.push_back(ds);
            return;
        }
        //step_1
        ds.push_back(nums[current]);
        //step_2
        helper(nums,ds,final_ans,current+1);
        //backtracking_step
        ds.pop_back();
        //step_3
        helper(nums,ds,final_ans,current+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>final_ans;
        helper(nums,ds,final_ans,0);
        return final_ans;
    }
};