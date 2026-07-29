class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double> time(speed.size());
        vector<pair<int,int>> poss;
        for(int i=0;i<time.size();i++){
            poss.push_back({position[i],speed[i]});
        }
        sort(poss.begin(),poss.end());
        for(int i=0;i<poss.size();i++){
            time[i]=((target-poss[i].first)*1.0)/(poss[i].second*1.0);
        }
        int ans = 0;
        stack<double> stk;
        for(int i=poss.size()-1;i>=0;i--){
            if(stk.empty() || stk.top()<time[i]){
                stk.push(time[i]);
                ans++;
            }

        }
        return ans;
    }
};