//very simillar to the problem "Permutaions" preseent in the same folder

class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,int f[])
    {
        if(ds.size()==nums.size()){
            // cout<<"ds "<<ds.size();
            ans.push_back(ds);
        }
        for(int i=0;i<nums.size();i++){
            if(!f[i])
            {
            //check if visited or not
            f[i]=1;
            //step_1
            ds.push_back(nums[i]);
            //step_2
            helper(nums,ans,ds,f);
            //backtrack_step_1
            f[i]=0;
            ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int f[nums.size()];
        for(int i=0;i<nums.size();i++){
            f[i]=0;
        }
        helper(nums,ans,ds,f);
        return ans;
    }
};