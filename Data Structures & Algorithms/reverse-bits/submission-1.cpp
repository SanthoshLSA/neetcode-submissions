class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int turn = 31;
        uint32_t ans = 0;
        while(turn >= 0){
            ans+= ((n>>(31-turn))&1)*pow(2,turn);
            turn--;
        }
        return ans;
    }
};
