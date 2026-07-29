class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letters(26,0);
        for(char x : s){
            letters[x-'a']++;
        }
        for(char x : t){
            letters[x-'a']--;
        }
        for(int x : letters){
            if(x!=0)return false;
        }
        return true;

    }
};
