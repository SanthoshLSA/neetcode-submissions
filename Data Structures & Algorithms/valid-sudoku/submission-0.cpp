class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int col = 0;
        int row = 0;
        vector<unordered_set<char>> rows(9),cols(9),squares(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                int row = i;
                int col = j;
                int square = (row/3) +((col/3)*3);
                char x = board[i][j];

                if(rows[row].find(x)!=rows[row].end()){
                    return false;
                }
                if(cols[col].find(x)!=cols[col].end()){
                    return false;
                }
                if(squares[square].find(x)!=squares[square].end()){
                    return false;
                }
                rows[row].insert(x);
                cols[col].insert(x);
                squares[square].insert(x);
            }
        }
        return true;
    }
};
