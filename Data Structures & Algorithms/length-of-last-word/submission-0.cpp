class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int idx = s.length()-1;
        while(idx>=0 && s[idx]==' '){
            idx--;
        }
        while(idx>=0 && s[idx]!=' '){
            ans++;
            idx--;
        }
        return ans;
    }
};