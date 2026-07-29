class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;
        for(char x:chars){
            freq[x]++;
        }
        int ans = 0;
        for(string x: words){
            unordered_map<char,int> f = freq;
            int flag = 0;
            for(char y:x){
                if(f.find(y)==f.end() || ((f.find(y)!=f.end())&&(f[y]==0))){
                    flag = 1;
                    break;
                }
                else f[y]--;
            }
            if(flag==0)ans+=x.length();
        }
        return ans;
    }
};