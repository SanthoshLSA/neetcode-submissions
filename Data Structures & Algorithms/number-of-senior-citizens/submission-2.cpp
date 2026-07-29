class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string x:details){
            int age = stoi(x.substr(11,2));
            cout<< age << " ";
            if(age>60)ans++;

        }
        return ans;
    }
};