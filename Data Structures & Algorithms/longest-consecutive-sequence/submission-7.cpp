class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> is;
        for(int x:nums)is.insert(x);
        for(int x:nums){
            if(is.find(x-1)!=is.end())continue;
            int a = 1;
            int i=1;
            while(is.find(x+i)!=is.end()){
                a++;
                i++;
        }
        ans = max(ans,a);
    }
    return ans;
    }
};
