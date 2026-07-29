class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> final;
        
        for(string a : strs){
            vector<int>lcnt(26,0);
            for(char x : a){
                lcnt[x-'a']++;
            }
            final[lcnt].push_back(a);
        }
        vector<vector<string>> ans;
        for(auto it: final){
            ans.push_back(it.second);
        }
        return ans;
    }
};
