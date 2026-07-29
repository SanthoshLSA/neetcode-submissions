class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(stk.empty() && (s[i]==']' || s[i]==')' || s[i]=='}' ))return false;
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' )stk.push(s[i]);
            else if(stk.top()=='{' && s[i]=='}' || stk.top()=='(' && s[i]==')' || stk.top()=='[' && s[i]==']'){
                stk.pop();
            }
            else return false;
        }
        return stk.empty();
    }
};
