class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minf=INT_MAX;
        int maxa=INT_MIN;
        for(int x:prices){
            minf=min(minf,x);
            maxa=max(maxa,x-minf);
        }
        return maxa;
    }
};
