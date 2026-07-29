class Solution {
public:
    int minOperations(string s) {
        int ans = 0;
        int len1= 0;
        int len2= 0;
        for(int i=0;i<s.length();i++){
            if(i%2==0 && s[i]=='1'){
                len1++;
            }
            if(i%2==1 && s[i]=='0'){
                len1++;
            }   
            if(i%2==0 && s[i]=='0'){
                len2++;
            }
            if(i%2==1 && s[i]=='1'){
                len2++;
            }}

        return min(len1,len2);
    }
};