class Solution {
public:
    void rec(vector<vector<int>>& ans,vector<int>& nums,int idx,vector<int>& temp,int k){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(idx==nums.size())return;
        temp.push_back(nums[idx]);
        rec(ans,nums,idx+1,temp,k);
        temp.pop_back();
        rec(ans,nums,idx+1,temp,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i =1;i<=n;i++)nums.push_back(i);
        vector<vector<int>> ans;
        vector<int> temp;
        rec(ans,nums,0,temp,k);
        return ans;
    }
};