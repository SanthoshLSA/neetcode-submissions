class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i<=n;i++){
            int m  = i;
            int num = 0;
            while(m>0){
                num++;
                m = m & (m-1);
            }
            ans.push_back(num);
        }
        return ans;
    }
};
