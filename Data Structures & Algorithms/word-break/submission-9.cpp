class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp(s.length()+1,false);
        dp[s.length()]=true;
        for(int i=s.length()-1;i>=0;i--){
            for(string x:wordDict){
                if(i+x.length()-1<s.length() && s.substr(i,x.length())==x){
                        dp[i]=dp[i+x.length()];
                }
                if(dp[i])break;
            }
        }
        return dp[0];
    }
};
