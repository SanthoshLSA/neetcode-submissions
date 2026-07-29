class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        for(int i =0;i<points.size();i++){
            int x1 = points[i][0];
            int x2 = points[i][1];
            int dist = pow((x1-x2),2.0)+pow((x1+x2),2.0);
            pq.push({dist,{x1,x2}});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};