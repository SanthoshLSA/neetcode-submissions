class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> is;
        for(int x:nums)is.insert(x);
        int maxcs=0;
        for(int x:is){
            int cnt=1;
            while(is.find(++x)!=is.end()){
                cnt++;
            }
            maxcs=max(maxcs,cnt);
        }
        return maxcs;
    }
};
