class Solution {
public:
    bool isPalindrome(int x) {
        
        int n = x;
        if(x < 0) return false;
        else if(x < 10 && x>0) return true;
        else{
            long int r = 0, num = 0;

            while(n > 0){
                r = n % 10;
                num = (num * 10) + r;
                n = n / 10;
            }
            if(num == x) return true;
            else 
                return false;
        }
    }
}; 