class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if(temperatures.size()==1)return {0};
        vector<int> ans(temperatures.size());
        stack<pair<int,int>> stk;
        for(int i=ans.size()-1;i>=0;i--){
                while(!stk.empty() && temperatures[i]>=stk.top().first)stk.pop();
                if(!stk.empty())ans[i]=stk.top().second-i;
                stk.push({temperatures[i],i});
        }
        return ans;

    }
};