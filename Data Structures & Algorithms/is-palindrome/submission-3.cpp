class Solution {
public:
    bool isPalindrome(string s) {
        string final = "";
        for(char x: s){
            if(isalnum(x))final+=tolower(x);
        }
        int i = 0;
        int j = final.length()-1;
        cout<<final;
        while(i<j){
            if(final[i]!=final[j])return false;
            i++;
            j--;
        }
        return true;
    }
};
