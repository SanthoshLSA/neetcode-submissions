class Solution {
public:
    void rec(vector<string>& phone,vector<string>& ans,string temp,int idx,string& digits,int len){
        if(temp.length()==len){
            ans.push_back(temp);
            return;
        }
        for(char x:phone[digits[idx]-'0'-2]){
            temp+=x;
            rec(phone,ans,temp,idx+1,digits,len);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return{};
        vector<string> phone = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        rec(phone,ans,"",0,digits,digits.length());
        return ans;
    }
};
