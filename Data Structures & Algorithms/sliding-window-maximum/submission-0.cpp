class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> dq;
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.back()<=i-k){
                dq.pop_back();
            }
            while(!dq.empty() && nums[dq.front()]<nums[i]){
                dq.pop_front();
            }
            dq.push_front(i);
            if(i>=k-1)result.push_back(nums[dq.back()]);
        }
        return result;
    }
};