class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(char x : s){
            map1[x]++;
        }
        for(char x : t){
            map2[x]++;
        }
        return map1==map2;

    }
};
