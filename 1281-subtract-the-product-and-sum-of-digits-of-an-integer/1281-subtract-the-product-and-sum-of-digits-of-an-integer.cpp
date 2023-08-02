class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 , product = 1, diff,r; 
        while(n>0){
            r = n % 10;
            sum = sum + r;//finding out the sum of the digits here
            product = product * r;//finding out the product of the digits here
            n = n / 10;
        }
        diff = product - sum;
        return diff;
    }
};