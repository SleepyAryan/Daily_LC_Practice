//this problem is also 99% simillar to the combination_Sum_1...the only difference between this and the problem before is
//that it is avoiding the repeating entries..so what I did I sorted the array and checking if element at index is equal to 
//element at index+1...if not we are moving forward else we are just moving forward along a while loop
class Solution {
public:
    void helper(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int index,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(index == nums.size() || target-nums[index] < 0){
            return;
        }
        //step_1
            ds.push_back(nums[index]);
        //step_2
            helper(nums,ds,ans,index+1,target-nums[index]);
        //backtracking_step
            ds.pop_back();
        while(index<nums.size()-1 && nums[index]==nums[index+1])
            index++;
            //step_4
            helper(nums,ds,ans,index+1,target);

    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> ds;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        helper(nums,ds,ans,0,target);
        return ans;
    }
};