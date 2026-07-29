class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> is;
        for(int i=0;i<nums.size();i++){
            if(is.find(nums[i])!=is.end())return true;
            else is.insert(nums[i]);
        }
        return false;
    }
};