class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left_prod=1;
        int right_prod=1;
        int maxProd=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            left_prod*=nums[i];
            right_prod*=nums[n-i-1];
            maxProd=max(maxProd,max(left_prod,right_prod));
            if(left_prod==0){
                left_prod=1;
            }
            if(right_prod==0){
                right_prod=1;
            }
        }
        return maxProd;
    }
};