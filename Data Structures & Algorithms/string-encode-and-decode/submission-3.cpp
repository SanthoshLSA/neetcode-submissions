class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string x: strs){
            int len = x.length();
            string slen = to_string(len);
            ans+=slen;
            ans+='#';
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.length()){
        int num = 0;
        while(s[i]!='#'){
            num = (10*num)+ (s[i]- '0');
            i++;
        }
        i++;
        string t ="";
        for(int x=num;x>0;x--){
            t+=s[i];
            i++;
        }
        ans.push_back(t);

        }
        return ans;
    }
};
