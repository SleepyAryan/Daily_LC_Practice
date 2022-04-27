class Solution {
public:
    bool partition(vector<int>& nums, vector<bool> &vis, int k, int start, int curSum, int valueOfASeg){
        if(k==1) return true;
        if(curSum==valueOfASeg) return partition(nums,vis,k-1,0,0,valueOfASeg);
            
        for(int i=start; i<nums.size(); ++i){
            if(!vis[i] and curSum+nums[i]<=valueOfASeg){
                vis[i]=true;
                if(partition(nums,vis,k,i+1,curSum+nums[i],valueOfASeg)) return true;
                vis[i]=false;
            }
        }
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int prefixSum=0,valueOfASeg=0;
        for(auto &x : nums) prefixSum+=x;
        if(prefixSum%k!=0) return false;
        else valueOfASeg=prefixSum/k;
        
        vector<bool> vis(nums.size(),false);
        if(partition(nums,vis,k,0,0,valueOfASeg)) return true;
        return false;
    }
};

//explation yet to do..