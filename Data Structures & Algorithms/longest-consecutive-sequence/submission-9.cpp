class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int fans = 0;
        unordered_set<int> is;
        for(int x:nums)is.insert(x);
        for(int x:is){
            if(is.find(x-1)==is.end()){
                int ans = 0;
                while(is.find(x)!=is.end()){
                    ans++;
                    x++;
                }
                fans=max(fans,ans);
            }
        }
        return fans;
    }
};
