class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int target = nums[i];
            int a = i+1;
            int b = nums.size()-1;
            while(a<b){
                int sum = nums[a]+nums[b];
                if(sum == (-(target))){
                    ans.push_back({nums[i],nums[a],nums[b]});
                    while(a<b && nums[a]==nums[a+1])a++;
                    while(a<b && nums[b]==nums[b-1])b--;
                    a++;b--;
                }
                else if(sum<(-target))a++;
                else b--;
            }
        }
        return ans;
    }
};
