class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while((!isdigit(s[i]) && !isalpha(s[i]))&& i<j){
                i++;
            }
            while((!isdigit(s[j]) && !isalpha(s[j]))&& i<j){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j]))return false;
            i++;
            j--;
        }
        return true;
    }
};
