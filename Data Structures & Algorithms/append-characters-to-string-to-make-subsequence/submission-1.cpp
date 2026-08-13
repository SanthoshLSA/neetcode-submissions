class Solution {
public:
    int appendCharacters(string s, string t) {
        int a = 0;
        int b = 0;
        while(a<s.length() && b<t.length()){
            if(s[a]==t[b]){
                a++;
                b++;
            }
            else a++;
        }
        int ans = abs(b-int(t.length()));
        return ans;}
};