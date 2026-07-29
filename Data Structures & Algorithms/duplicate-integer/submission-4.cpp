class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> is;
        for(int x:nums){
            if(is.find(x)==is.end())is.insert(x);
            else return true;
        }
        return false;
    }
};