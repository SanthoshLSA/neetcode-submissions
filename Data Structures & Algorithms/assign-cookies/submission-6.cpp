class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int ans = 0;
        int i = 0;
        int j = 0;
        while(j<s.size() && i<g.size()){
            if(g[i]<=s[j]){
                ans++;
                j++;
                i++;}
            else j++;
        }
        return ans;
    }
};