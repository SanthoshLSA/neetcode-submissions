class Solution {
public:
    void rec(int idx,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0)return;

        for(int i = idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])continue;
        temp.push_back(nums[i]);
        rec(i+1,nums,temp,ans,target-nums[i]);
        temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans ;
        vector<int> temp;
        rec(0,candidates,temp,ans,target);
        return ans;
    }
};
