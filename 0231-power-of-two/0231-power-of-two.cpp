class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i = 0; i <= 30; i++ ){
            int ans = pow(2,i);
            if(ans == n){//checking power of 2 or not
                return true;
            }
        }
        return false;
    }
};