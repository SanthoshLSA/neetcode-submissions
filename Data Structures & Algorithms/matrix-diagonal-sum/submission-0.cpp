class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int neg = 1;
        int left = 0;
        int right = mat[0].size()-1;
        int ans = 0;
        for(int i=0;i<mat.size();i++){
            if(left==right)ans+=mat[i][left];
            else ans += mat[i][left]+mat[i][right];
            right--;
            left++;
        }
        return ans;
    }
};