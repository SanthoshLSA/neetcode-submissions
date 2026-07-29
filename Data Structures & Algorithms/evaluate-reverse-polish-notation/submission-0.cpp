class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        unordered_set<string> is = {"/","+","-","*"};
        for(int i=0;i<tokens.size();i++){
            if(stk.empty() || is.find(tokens[i])==is.end())stk.push(stoi(tokens[i]));
            else{
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                if(tokens[i]=="+")stk.push(a+b);
                else if(tokens[i]=="-")stk.push(a-b);
                else if(tokens[i]=="/")stk.push(a/b);
                else if(tokens[i]=="*")stk.push(a*b);
            }
        }
        return stk.top();
    }
};