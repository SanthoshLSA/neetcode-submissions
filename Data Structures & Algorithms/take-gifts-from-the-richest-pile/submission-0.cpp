class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        sort(gifts.begin(),gifts.end());
        int len = gifts.size()-1;
        for(int i=0;i<k;i++){
            gifts[len] = floor(sqrt(gifts[len]));
            sort(gifts.begin(),gifts.end());
            
        }
        for(int x:gifts)ans+=x;
        return ans;
    }
};