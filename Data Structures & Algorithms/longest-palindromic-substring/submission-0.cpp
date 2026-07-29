class Solution {
public:
    string longestPalindrome(string s) {
        string t = "#";
        for(char x:s){
            t+= x;
            t+= "#";
        }
        int n= t.size();
        vector<int> p(n,0);
        int start=0,maxlen=0,center=0,right=0;
        for(int i=0;i<n;i++){

            int mirror = 2*center -i;

            if(i<right){
                p[i]=min(right-i,p[mirror]);
            }

            while(i+p[i]+1<n && i-p[i]-1>=0 && t[i+p[i]+1]==t[i-p[i]-1]){
                p[i]++;
            }

            if(i+p[i]>right){
                center = i;
                right= i+p[i];
            }

            if(maxlen<p[i]){
                maxlen=p[i];
                start=(i-maxlen)/2;
            }
        }
        return s.substr(start,maxlen);
    }
};
