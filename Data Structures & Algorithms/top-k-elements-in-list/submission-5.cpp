class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> counts(100001);
        unordered_map<int,int> cnt;
        for(int x: nums){
            cnt[x]++;
        }
        for(auto it : cnt){
            counts[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i = counts.size()-1;i>=0;i--){
            if(counts[i].empty())continue;
            for(auto x:counts[i]){
                k--;
                ans.push_back(x);
                if(k==0)return ans;
            }
        }
        return ans;
    }
};
