class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int a1=0,a2=0;
        int first=nums[0];
        int second=max(nums[0],nums[1]);
        for(int i=2;i<nums.size()-1;i++){
            int next=max(nums[i]+first,second);
            first=second;
            second=next;
        }
        a1= second;
         first=nums[1];
         second=max(nums[1],nums[2]);
        for(int i=3;i<nums.size();i++){
            int next=max(nums[i]+first,second);
            first=second;
            second=next;
        }
        a2=second;
        return max(a1,a2);

    }
};
