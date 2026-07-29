class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> grps;
        for(string x: strs){
            vector<int> temp(26);
            for(char y : x){
                temp[y-'a']++;
            }
            grps[temp].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x:grps){
            vector<string> temp;
            for(auto y : x.second)temp.push_back(y);
            ans.push_back(temp);
        }
        return ans;
    }
};
