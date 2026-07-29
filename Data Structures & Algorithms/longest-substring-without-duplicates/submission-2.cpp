class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0;
        unordered_set<char> is;
        while(j<s.length()){
            while(is.find(s[j])!=is.end()){
                is.erase(s[i]);
                i++;
            }
            is.insert(s[j]);
            cnt = max(cnt,j-i+1);
            j++;
        }
        return cnt;
    }
};
