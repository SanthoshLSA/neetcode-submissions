class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string x: strs){
            ans += to_string(x.length());
            ans += '#';
            ans +=  x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.length()){
            int length = 0;
            while(s[i]!='#'){
                length = (length*10)+(int(s[i]-'0'));
                i++;
            }
            i++;
            string temp = "";
            for(int j=0;j<length;j++){
                temp+=s[i];
                i++;
            }
            ans.push_back(temp);
        }
        return ans;

    }
};
