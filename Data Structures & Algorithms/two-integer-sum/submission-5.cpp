class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        for(int i=0;i<nums.size();i++){
            if(idx.find(nums[i])!=idx.end())return {idx[nums[i]],i};
            else idx[target-nums[i]]=i;
        }
        return {};
    }
};
