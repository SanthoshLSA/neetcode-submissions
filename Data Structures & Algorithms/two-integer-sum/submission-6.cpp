class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        for(int i=0;i<nums.size();i++){
            if(idx.find(nums[i])==idx.end()){
                idx[target-nums[i]]=i;
            }
            else return {idx[nums[i]],i};
        }
        return {};
    }
};
