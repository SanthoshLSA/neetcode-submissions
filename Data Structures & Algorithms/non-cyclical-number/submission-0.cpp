class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> is;
        int flag = 0;
        while(n!=1){
            int num = 0;
            while(n>0){
                num += pow(n%10,2);
                n/=10;
            }
            n=num;
            if(is.find(n)!=is.end()){
                flag=1;
                break;
            }
            is.insert(n);
        }
        return !flag;
    }
};