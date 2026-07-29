class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int len = 1;
        int flag = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                len++;
                ans=max(ans,len);
            }
            else len = 1;
        }
        len = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                len++;
                ans=max(ans,len);
            }
            else len = 1;
        }
        return ans;
    }
};