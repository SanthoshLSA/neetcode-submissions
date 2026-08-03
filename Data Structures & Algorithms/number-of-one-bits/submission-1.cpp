class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        int turn = 0;
        while(turn<32){
            int m =n>>turn;
            turn++;
            ans+=m&1;
        }
        return ans;
    }
};
