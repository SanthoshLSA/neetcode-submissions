class Solution {
public:
    bool isPal(string s){
        int i =0;
        int j =s.length()-1;
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i =0;
        int j =s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return isPal(s.substr(i,j-i))||isPal(s.substr(i+1,j-i));
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};