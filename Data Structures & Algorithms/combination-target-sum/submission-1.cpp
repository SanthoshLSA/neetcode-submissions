class Solution {
public:
    void rec(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans,int target){
        if(idx==nums.size() || target<0){
            if(target==0)ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        rec(idx,nums,temp,ans,target-nums[idx]);
        temp.pop_back();
        rec(idx+1,nums,temp,ans,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans ;
        vector<int> temp;
        rec(0,nums,temp,ans,target);
        return ans;

    }
};
