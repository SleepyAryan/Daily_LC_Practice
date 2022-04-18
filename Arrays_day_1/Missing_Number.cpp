class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int actSum=0;
        for(int i=0;i<n;i++){
            actSum+=nums[i];
        }
        return sum-actSum;
    }
};

simple sum formulae used here ((n)*(n+1))/2
