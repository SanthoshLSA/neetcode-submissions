class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> word1(26);
        vector<int> word2(26);
        for(char x:s1){
            word1[x-'a']++;
        }
        for(int i=0;i<s1.length();i++){
            word2[s2[i]-'a']++;
        }
        if(word1==word2)return true;
        int left = 0;
        int right = s1.length();
        int i=0;
        while(right<s2.length()){
            word2[s2[right]-'a']++;
            word2[s2[left]-'a']--;
            if(word1==word2)return true;
            left++;
            right++;
        }
        return false;
    }
};