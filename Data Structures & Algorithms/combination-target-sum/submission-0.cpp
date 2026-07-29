class Solution {
public:
    void comb(int i,int target,vector<int>& nums,vector<vector<int>> & ans,vector<int>& ds ){
        if(i==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[i]<=target){
            ds.push_back(nums[i]);
            comb(i,target-nums[i],nums,ans,ds);
            ds.pop_back();
        }
        comb(i+1,target,nums,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        comb(0,target,nums,ans,ds);
        return ans;
    }
};
