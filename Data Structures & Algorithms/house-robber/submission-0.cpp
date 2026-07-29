class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        if(len==1)return nums[0];
        int first=nums[0];
        int second=max(first,nums[1]);
        for(int i=2;i<len;i++){
            int next=max(nums[i]+first,second);
            first=second;
            second=next;
        }
        return second;

    }
};
