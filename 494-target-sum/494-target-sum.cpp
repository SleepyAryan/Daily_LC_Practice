class Solution {
public:
    int helper(vector<int>& nums,int current,int target)
    {
     if(target==0 && current==nums.size())
        {
            return 1;
        }
        if(target!=0 && current>=nums.size())
        {
            return 0;
        }
        int positive=helper(nums,current+1,target-nums[current]);
        int negative=helper(nums,current+1,target+nums[current]);
        return positive+negative;
    }
    int findTargetSumWays(vector<int>& nums, int target)
    {
        return helper(nums,0,target);
    }
};