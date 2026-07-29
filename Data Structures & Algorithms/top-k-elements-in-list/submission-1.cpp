class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums)freq[x]++;
        vector<vector<int>> buck(nums.size());
        for(auto x:freq){
            buck[x.second-1].push_back(x.first);
        }
        vector<int> ans;
        int i=nums.size()-1;
        while(i>=0 && k>0){
            for(int j=0;j<buck[i].size();j++){
                if(k>0){
                    ans.push_back(buck[i][j]);
                    k--;}
            }
            i--;
        }
        return ans;
    }
};
