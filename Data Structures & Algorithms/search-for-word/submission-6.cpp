class Solution {
public:
    void rec(vector<vector<int>>& visited,int i,int j,string temp,string& word,vector<vector<char>>& board,bool& ans,vector<vector<int>>& dir){
        if(ans)return;
        if(temp.length()==word.length()){
            ans=true;
            return;
        }
        for(auto x:dir){
            if(ans)break;
            if(i+x[0]>=0 && i+x[0]<board.size() && j+x[1]>=0 && j+x[1]<board[0].size()){
                if(board[i+x[0]][j+x[1]]==word[temp.length()] && visited[i+x[0]][j+x[1]]==0){
                    visited[i+x[0]][j+x[1]]=1;
                    temp+=word[temp.length()];
                    rec(visited,i+x[0],j+x[1],temp,word,board,ans,dir);
                    temp.pop_back();
                    visited[i+x[0]][j+x[1]]=0;
                }
            }
        }
        


        
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> visited(board.size(),vector<int>(board[0].size(),0));
        bool ans = false;
        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
        for(int i =0;i<board.size();i++){
            if(ans)break;
            for(int j=0;j<board[0].size();j++){
                if(ans)break;
                if(board[i][j]==word[0]){
                    string temp = "";
                    temp+=word[0];
                    visited[i][j]=1;
                    rec(visited,i,j,temp,word,board,ans,dir);
                    visited[i][j]=0;}
            }
        }
        return ans;
    }
};
