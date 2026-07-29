class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int x = len;
        for(int i=0;i<len;i++){
            if(nums[i]>=x){
    
                if(i==0)return x;
                else if(nums[i-1]==x)return -1;
                return x;
            }
            x--;
        }
        return -1;
    }
};