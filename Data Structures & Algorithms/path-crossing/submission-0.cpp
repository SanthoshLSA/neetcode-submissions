class Solution {
public:
    bool isPathCrossing(string path) {
        set<vector<int>> is={{0,0}};
        vector<int> start = {0,0};
        for(char x:path){
            if(x=='N'){
                start[0]++;
            }
            else if(x=='S')start[0]--;
            else if(x=='E')start[1]++;
            else start[1]--;
            
            if(is.find(start)!=is.end())return true;
            is.insert(start);
        }
        return false;
        
    }
};