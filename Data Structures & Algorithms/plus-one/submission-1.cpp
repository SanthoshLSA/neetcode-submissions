class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int carry = 0;
       int i = digits.size()-1;
        while(i>=0 && digits[i]==9){
            digits[i]=0;
            i--;
        }
        vector<int> ans = {1};
        if(i==-1){
            for(int x:digits)ans.push_back(x);
            return ans;
        }
        else{
            digits[i]++;
        }
        return digits;
        
    }
};