class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> stk;
        for(string x:operations){
        
            if(x=="+"){
                int a = stoi(stk.top());
                stk.pop();
                int b = stoi(stk.top());
                stk.pop();
                stk.push(to_string(b));
                stk.push(to_string(a));
                stk.push(to_string(a+b));
            }
            else if(x=="C"){
                stk.pop();
            }
            else if(x=="D"){
                int a = stoi(stk.top());
                stk.push(to_string(a*2));
            }
            else stk.push(x);
        }
        int ans = 0;
        while(!stk.empty()){
            ans += stoi(stk.top());
            stk.pop();
        }
        return ans;
    }
};