//same as the previous_problem..just the difference is we are not supposed to add duplicate values...so we add a extra set
//to remove the duplicate entries
class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,int f[])
    {
        if(ds.size()==nums.size()){
            // cout<<"ds "<<ds.size();
            ans.push_back(ds);
        }
        //step_1
        for(int i=0;i<nums.size();i++){
            //checking visited or not
            if(!f[i])
            {
            //step_2
            f[i]=1;
            ds.push_back(nums[i]);
            helper(nums,ans,ds,f);
            //backtracking_step
            f[i]=0;
            ds.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<vector<int>>final_ans;
        vector<int>ds;
        int f[nums.size()];
        for(int i=0;i<nums.size();i++){
            f[i]=0;
        }
        vector<vector<int>>finally_ans;
        helper(nums,ans,ds,f);
        set<vector<int>>s;
        //sending elements to the set to remove the duplicate entries
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        //getting the elements back from the set to a vector to return the value
        for(auto k:s){
            finally_ans.push_back(k);
        }
        return finally_ans;   
    }
};