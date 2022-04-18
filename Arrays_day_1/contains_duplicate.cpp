class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
       for(auto num:nums){
           mp[num]++;
       }
        for(auto num:nums){
            if(mp[num]>1){
                return true;
            }
        }
        return false;
    }
};

//no intuition here...its just  simple counting sort...other possible solutions involve sorting it..so it would be O(nLogN) and O(1)..without sorting using a hashmap would give O(N) n O(1)