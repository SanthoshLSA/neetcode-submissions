class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> let;
        for(char x:allowed)let.insert(x);
        int ans = 0;
        for(string x: words){
            for(char y:x){
                if(let.find(y)==let.end()){
                    ans++;
                    break;}
                
            }
        }
        return words.size()-ans;
    }
};