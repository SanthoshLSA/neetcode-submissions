/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int>start;
        vector<int>end;
        for(auto x:intervals){
            start.push_back(x.start);
            end.push_back(x.end);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int i=0;
        int j=0;
        int cnt=0;
        int maxc=0;
        while(i<end.size()){
            if(start[i]<end[j]){
                i++;
                cnt++;
            }
            else{
                j++;
                cnt--;
            }
            maxc=max(maxc,cnt);
        }
        return maxc;

    }
};
