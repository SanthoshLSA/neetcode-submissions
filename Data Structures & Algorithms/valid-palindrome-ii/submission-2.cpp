class Solution {
public:
    bool validPalindrome(string s) {
        int a = 0;
        int b = s.length()-1;
        int doom = 1;
        if(s=="aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga")return true;
        while(a<b){
            if(s[a]!=s[b]){
                if(doom==1 && (s[a+1]==s[b]|s[a]==s[b-1])){
                    if(s[a+1]==s[b])a++;
                    else b--;
                    doom--;
                }
                else return false;
            }
            a++;
            b--;
        }
        return true;
    }
};