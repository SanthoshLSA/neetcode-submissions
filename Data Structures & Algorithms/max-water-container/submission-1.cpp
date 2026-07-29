class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int l = 0;
        int r = heights.size()-1;
        while(l<r){
            int vol = min(heights[l],heights[r])*(r-l);
            ans = max(ans,vol);
            if(heights[l]<heights[r])l++;
            else if(heights[l]>heights[r])r--;
            else if(heights[l]==heights[r]){
                l++;
                r--;}
        }
        return ans;
    }
};
