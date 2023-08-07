class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int st = 0; 
        int next = 0;

        while(next < n){
            if(nums[next] != 0){

                swap(nums[st], nums[next]);

                st++;
            }
            next++;//check for the next element(it will always increament to check for the next)
        }
    }
};