class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //defining the start and the end point
      int start=0;
        int sum=0;
        int end=0;
        int length=INT_MAX;
        //this thing here is pretty self explnatory
        while(end<nums.size()){
            sum+=nums[end];
            end++;
            while(sum>=target){
                //finding the minimum length of the suba array meeting the valid condition
                length=min(length,end-start);
                sum-=nums[start];
                start++;
            }
        }
        return length==INT_MAX?0:length;
    }
};