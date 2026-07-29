class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i = 0;
        int left = 0;
        int a =0;
        while(i<nums.size()){
            a = nums[i];
            nums[left]=a;
            while(i<nums.size() && nums[i]==a){
                i++;
                }
            left++;
        }

        return left;
    }
};