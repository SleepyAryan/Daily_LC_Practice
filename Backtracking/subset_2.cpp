class Solution {
public:
    void helper(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int index){
        if(index == nums.size()){
            ans.push_back(ds);
            return;
        }
        //step_1
            ds.push_back(nums[index]);
        //step_2
            helper(nums,ds,ans,index+1);
        //backtracking_step
            ds.pop_back();
        //step_3
            helper(nums,ds,ans,index+1);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<vector<int>> finalAns;
         set<vector<int>>s;
        helper(nums,ds,ans,0);
        for(auto num:ans){
            sort(num.begin(),num.end());
            s.insert(num);
        }
    //only difference between subset_1 and subset_2 is the use of a set..this will remove the redundancy in the output
        for(auto num:s){
            finalAns.push_back(num);
        }
        return finalAns;
    }
};


