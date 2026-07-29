class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> is;
        for(int x:nums){
            is.insert(x);
        }
        int maxc=0;
        for(auto x:is){
            if(is.find(x-1)==is.end()){
                int cnt=1;
                while(is.find(x+1)!=is.end()){
                    cnt++;
                    x++;
                }
                maxc=max(maxc,cnt);
            }
        }
        return maxc;
    }
};
