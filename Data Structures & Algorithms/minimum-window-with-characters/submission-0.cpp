class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty())return "";
        unordered_map<char,int> tcount;
        for(char x:t)tcount[x]++;
        int left=0,right=0,minlen=INT_MAX,minleft=-1,ut=tcount.size(),have=0;
        unordered_map<char,int> window;
        while(right<s.length()){
            char x=s[right];
            window[x]++;

            if(tcount.count(x) && window[x]==tcount[x]){
                have++;
            }
            while(have==ut){
                if(minlen>right-left+1){
                    minlen=right-left+1;
                    minleft=left;
                }
                char y=s[left];
                window[y]--;

                if(tcount.count(y) && window[y]<tcount[y]){
                    have--;
                }
                left++;
                
            }
            right++;
        }
        if(minleft==-1)return "";
        return s.substr(minleft,minlen);
    }
};
