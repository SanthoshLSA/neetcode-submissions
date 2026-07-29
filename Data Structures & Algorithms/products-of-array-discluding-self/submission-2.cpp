class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size(),1);
        vector<int> suf(nums.size(),1);
        pref[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pref[i]*=pref[i-1]*nums[i];
        }
        suf[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            suf[i]*=suf[i+1]*nums[i];
        }
        vector<int> ans(nums.size(),1);
        for(int i=0;i<ans.size();i++){
            ans[i]=((i!=0)?(pref[i-1]):1) * ((i!=nums.size()-1)?(suf[i+1]):1);
        }
        return ans;

    }
};
