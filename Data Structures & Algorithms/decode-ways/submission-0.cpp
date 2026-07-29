class Solution {
public:
    int numDecodings(string s) {
        int first=1;
        int second=1;
        if(s[0]=='0')second=0;
        for(int i=1;i<s.length();i++){
            int next=0;
            int b=stoi(s.substr(i-1,2));
            if(b>=10 && b<=26)next+=first;
            if(s[i]!='0')next+=second;
            first=second;
            second=next;
        }
        return second;
    }
};
