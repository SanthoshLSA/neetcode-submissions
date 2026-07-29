class Solution {
public:

    string encode(vector<string>& strs) {
        string ss="";
        int i=0;
        while(i<strs.size()){
            ss+=to_string(strs[i].length())+"#"+strs[i];
            i++;
        }
        return ss;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            string temp="";
            int num=0;
            while(isdigit(s[i])){
                num=(num*10)+(s[i]-'0');
                i++;
            }
            i++;
            while(num!=0){
                temp+=s[i];
                i++;
                num--;
            }
            ans.push_back(temp);
        }
        return ans;
    }

};
