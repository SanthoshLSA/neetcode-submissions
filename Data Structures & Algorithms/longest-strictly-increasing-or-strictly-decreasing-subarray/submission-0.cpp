class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int flag = 0;
        int a = nums[0];
        int len = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>a && flag==0){
                len++;
                ans = max(ans,len);
            }
            else if(nums[i]>a && flag==1){
                len = 2;
                flag = 0;
            }
            else if(nums[i]<a && flag ==0){
                len = 2;
                flag = 1;
            }
            else if(nums[i]<a && flag==1){
                len++;
                ans = max(ans,len);
            }
            else if(nums[i]==a)len = 1;
            a = nums[i];
        }
        return ans;
    }
};