// Easie Peasie DP problem..
class Solution {
public:
    int countStairs(int curr,int n,unordered_map<int,int>&mp)
    {
        if(curr==n)
        {
            return 1;
        }
        if(curr>n)
        {
            return 0;
        }
        if(mp.find(curr)!=mp.end())
        {
            return mp[curr];
        }
        int oneStep = countStairs(curr+1,n,mp);
        int twoStep = countStairs(curr+2,n,mp);
        mp[curr]=oneStep+twoStep;
        return mp[curr];
    }
    int climbStairs(int n) {
        unordered_map<int,int>mp;
        return countStairs(0,n,mp);
    }
};