class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stk;
        int ans = INT_MIN;
        for(int i=0;i<heights.size();i++){
            ans = max(ans,heights[i]);
            if(stk.empty())stk.push(i);
            else{
                if(heights[i]>=heights[stk.top()])stk.push(i);
                else{
                    while(!stk.empty() && heights[i]<heights[stk.top()]){
                        int a = stk.top();
                        int height = heights[a];
                        stk.pop();
                        int pse = 0;
                        if(stk.empty()) pse = -1;
                        else pse = stk.top();
                        ans = max(ans,height*(i-pse-1));}
                    
                    stk.push(i);
                    }
            }
        }
        while(!stk.empty()){
            int idx = stk.top();
            stk.pop();
            int area = 0;
            if(stk.empty())area = heights[idx]*(heights.size());
            else area = heights[idx]*(heights.size()-stk.top()-1);
            ans = max(ans,area);
        }
        return ans;
    }
};