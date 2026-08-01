class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i =0;i<nums.size();i++)pq.push({nums[i],i});
        for(int i =0;i<k;i++){
            int x = pq.top().first;
            int y = pq.top().second;
            pq.pop();
            pq.push({x*multiplier,y});
        }
        while(!pq.empty()){
            nums[pq.top().second]=pq.top().first;
            pq.pop();
        }
        return nums;
    }
};