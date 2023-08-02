class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n,mask=0;
        //edge case
        if(n==0){
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1;//creating mask to remove 1 before the no.s
            m = m >> 1;
        }
        return (~n & mask) ;
    }
};