class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        for(char x:s){
            a[x]++;
        }
        for(char x:t){
            b[x]++;
        }
        return a==b;
    }
};
