class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        int i=goal;
        while(i>=0){
            if(i+nums[i]>=goal)goal=i;
            i--;
        }
        return goal==0;
    }
};
