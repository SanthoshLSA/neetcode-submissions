class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=(nums.size()*(nums.size()+1))/2;
        int asum=0;
        for(int x:nums)asum+=x;
        return sum-asum;
    }
};
