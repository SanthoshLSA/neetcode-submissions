class Solution {
public:
    void rec(vector<int>& nums,vector<vector<int>>& ans,vector<int> temp,vector<bool> pick){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i =0;i<nums.size();i++){
            if(!pick[i]){
                temp.push_back(nums[i]);
                pick[i]=true;
                rec(nums,ans,temp,pick);
                pick[i]=false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> pick(nums.size(),false);
        rec(nums,ans,temp,pick);
        return ans;
    }
};
