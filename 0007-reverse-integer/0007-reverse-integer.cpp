class Solution {
public:
    int reverse(int x) {
        int r, rev=0;
        while(x!=0){
            r = x % 10;//finding out the last digit one by one
            if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
                return 0;
            }
            rev = rev * 10 + r;//reversing here
            x = x/10;
        }
       return rev;
    }
};