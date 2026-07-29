class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty())return 0;
        int ans=0;
        sort(intervals.begin(),intervals.end());
        int prevend=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(prevend>intervals[i][0]){
                prevend=min(prevend,intervals[i][1]);
                ans++;
            }
            else{
                prevend=intervals[i][1];
            }
        }
        return ans;
    }
};
