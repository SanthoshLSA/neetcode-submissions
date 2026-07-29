class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        int j=0;
        int i=31-j;
        while(i!=0){
            i=31-j;
            res |= (((n>>j)&1)<<i);
            j++;
        }
        return res;
    }
};
