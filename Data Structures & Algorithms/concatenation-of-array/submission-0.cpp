class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> numss = nums;
        for(int x:nums)numss.push_back(x);
        return numss;
    }
};