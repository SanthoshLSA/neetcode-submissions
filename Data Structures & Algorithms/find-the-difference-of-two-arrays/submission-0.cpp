class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        
        unordered_set<int> mp1;
        for(int x:nums1)mp1.insert(x);
        unordered_set<int> mp2;
        unordered_set<int> mp3;
        unordered_set<int> mp4;

        for(int x:nums2)mp2.insert(x);
        for(int x:nums1){
            if(mp2.find(x)==mp2.end() && mp3.find(x)==mp3.end())ans[0].push_back(x);
            mp3.insert(x);
        }
        for(int x:nums2){
            if(mp1.find(x)==mp1.end() && mp4.find(x)==mp4.end())ans[1].push_back(x);
            mp4.insert(x);
        }

        return ans;

    }
};