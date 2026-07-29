class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string w1 = strs[0];
        string w2 = strs[strs.size()-1];
        string ans = "";
        int i=0 ;
        while(i<w1.size()&&i<w2.size()){
            if(w1[i]==w2[i])ans+=w1[i];
            else break;
            i++;
        }
        return ans;
    }
};