class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i<matrix.size();i++){
            for(int j = i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i =0;i<matrix.size();i++){
            int a = 0;
            int b = matrix[0].size()-1;
            while(a<b){
                swap(matrix[i][a],matrix[i][b]);
                a++;
                b--;
            }
        }
    }
};