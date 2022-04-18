// I have explained the intitution very well in my notebook..please refer that for understanding it

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1] >= 0){
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            }
            else{
                ans.push_back(abs(nums[i]));
            }
        }
            return ans;
    }
    
};
