class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            if(n&1){
                count++;//counting 1 here
            }
            n = n>>1;

        }
        return count;
    }
};