class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0]=1;
        int ans=1;
        for(int i=1;i<nums.size();i++){
            int maxl=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    maxl=max(maxl,dp[j]+1);
                }
            }
            dp[i]=maxl;
            ans=max(dp[i],ans);
        }
        return ans;
    }
};
