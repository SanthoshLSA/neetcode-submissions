class Solution {
public:
    int getSum(int a, int b) {
       int i=0;
       int res=0;
       int carry=0;
       while(i<32){
        int c=(a>>i)&1;
        int d=(b>>i)&1;
        res |= (c^d^carry)<<i;
        if(c&d==1 || c&carry==1 || d&carry==1)carry=1;
        else carry=0;
        i++;
       }
       return res;
    }
};

