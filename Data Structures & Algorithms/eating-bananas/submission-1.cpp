class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for(int x:piles){
            high = max(high,x);
        }
        while(low<=high){
            int mid = (low+high)/2;
            int a = 0;
            for(int i=0;i<piles.size();i++){
                a+=ceil((double)piles[i]/mid);
            }
            if(a>h)low=mid+1;
            else high = mid-1;
        }
        return low;
    }
};
