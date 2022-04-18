class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>ans;
        unordered_map<int, bool>mp;
        for(int i = 0; i < n; i++) mp[nums[i]]+=1;
        
        for(int i = 1; i <= n; i++)
            if(mp.find(i) == mp.end()) ans.push_back(i);
        
        return ans;
    }
};

//just a very easy problem based on hashing..we here are just using a hashmap to insert the elements in the array...later we are just iterarating through 0 to n-1 to see if any element is absent in the map..
