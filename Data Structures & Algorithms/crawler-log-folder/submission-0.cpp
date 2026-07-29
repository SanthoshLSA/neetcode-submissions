class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for(string x:logs){
            if(x=="./")continue;
            if(x=="../"){
                if(depth==0)continue;
                depth--;}
            else depth++;
        }
        return depth;
    }
};