class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxw=INT_MIN;
        while(left<right){
            maxw=max(maxw,min(heights[left],heights[right])*(right-left));
            if(heights[left]<heights[right])left++;
            else if(heights[left]>heights[right])right--;
            else{
                left++;
                right--;
            }
        }
    return maxw;
    }
};
