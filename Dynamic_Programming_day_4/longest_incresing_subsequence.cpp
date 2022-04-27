class Solution {
public:
    int helper(vector<int>& nums,int preVal,int current){
        if(current>=nums.size()){
            return 0;
        }
        int consider=0;
        //setting up a preVal which will only let us take value greater than the choosen
        if(nums[current]>preVal)
        {
            //choosing the value
            consider=1+helper(nums,nums[current],current+1);
        }
            //Not Chossing the value
        int notConsider=helper(nums,nums[current],current+1);
        //maximum of both of them
        return max(consider,notConsider);
    }
    int lengthOfLIS(vector<int>& nums) {
        int preVal=-100000;
        return helper(nums,preVal,0);
    }
};