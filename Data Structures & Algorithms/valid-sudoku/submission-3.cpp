class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9),cols(9),box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                int num = board[i][j]-'0';
                if(rows[i].find(num)!=rows[i].end())return false;
                rows[i].insert(num);
                if(cols[j].find(num)!=cols[j].end())return false;
                cols[j].insert(num);
                int row = floor(i/3);
                int col = floor(j/3);
                int place = (col*3)+row;
                if(box[place].find(num)!=box[place].end())return false;
                box[place].insert(num);
            }
        }

        
        return true;
    }
};
