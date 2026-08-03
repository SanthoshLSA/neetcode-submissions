class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        int turn = 0;
        int ans = 0;
        int mask = 0xFFFFFFFF;
        while(turn<32){
            int x = (a>>turn)&1;
            int y = (b>>turn)&1;
            int num  = carry ^ x ^ y;
            carry = (x+y+carry)>=2;
            if(num){
                ans |= (1<<turn);
            }
            turn++;
        }
        if (ans > 0x7FFFFFFF) {
            ans = ~(ans ^ mask);
        }
        return ans;
    }
};
