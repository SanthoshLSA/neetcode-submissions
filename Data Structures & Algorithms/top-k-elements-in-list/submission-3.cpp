class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums)freq[x]++;
        vector<vector<int>> ans(nums.size()+1);
        for(auto x:freq){
            ans[x.second].push_back(x.first);
        }
        int i=nums.size();
        vector<int> fans;
        while(k>0){
            if(!ans[i].empty()){
                for(int x:ans[i]){
                    fans.push_back(x);
                    k--;
                    if(k==0)break;
                }
            }
            i--;
        }
        return fans;

    }
};
