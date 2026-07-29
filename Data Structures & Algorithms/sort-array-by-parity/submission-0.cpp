class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> ans;
        for(int x:nums){
            if(x%2==0)a.push_back(x);
            else b.push_back(x);
        }
        for(int x:a)ans.push_back(x);
        for(int x:b)ans.push_back(x);
        return ans;

    }
};