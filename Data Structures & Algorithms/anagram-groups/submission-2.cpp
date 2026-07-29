class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> freq;
        for(int i=0;i<strs.size();i++){
            vector<int> freqq(26,0);
            for(int j=0;j<strs[i].length();j++){
                freqq[strs[i][j]-'a']++;
            }
            freq[freqq].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x:freq){
            vector<string> anss;
            for(string y:x.second){
                anss.push_back(y);
            }
            ans.push_back(anss);
        }
        return ans;
    }
};
