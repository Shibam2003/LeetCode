class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++){
            //checking for rotated sorted array
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
         //checking for sorted array 
            if(nums[n-1] > nums[0]){
                count++;
            }
        return (count <= 1);
    }
};