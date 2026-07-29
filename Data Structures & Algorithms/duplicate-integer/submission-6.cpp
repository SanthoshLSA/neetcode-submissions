class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> exists;
        for(int x: nums){
            if(exists.find(x)==exists.end())exists.insert(x);
            else return true;
        }
        return false;
    }
};