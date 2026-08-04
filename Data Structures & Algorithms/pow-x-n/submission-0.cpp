class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long pow=n;
        int neg=0;
        if(pow<0){
            neg=1;
            pow*=-1;
        }
        while(pow>0){
            if((pow&1)==0){
                x*=x;
                pow/=2;
            }
            else{
                pow--;
                ans*=x;
            }
        }
        if(neg)return 1/ans;
        return ans;
    }
};