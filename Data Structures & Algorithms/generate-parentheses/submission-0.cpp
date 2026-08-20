class Solution {
public:
    void rec(int l, int r, vector<string>& ans, string temp){
        if(l==r && l==0){
            ans.push_back(temp);
            return;
        }
        if(l==r){
            temp+='(';
            rec(l-1,r,ans,temp);}
        else{
            if(l>0){
            temp+='(';
            rec(l-1,r,ans,temp);
            temp.pop_back();}
            temp+=')';
            rec(l,r-1,ans,temp);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        rec(n,n,ans,"");
        return ans;
    }
};
