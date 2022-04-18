// There are multiple solutions to this problem

// Obviously you can use sorting and a unordered_map which will basically do a count sort

// but all this solutions will either have a complexity of O(nLogN) or a complexity of O(N) n O(N) {SC}

// most efficient afaik is using floyd's algorithm

// this is done exactly the same way as we do in case of LinkedList Cycle

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};