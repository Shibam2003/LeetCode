class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        for(int i = 0; i < nums.size(); i++){
            int r = (i+k) % nums.size();
            temp[r] = nums[i]; 
        }
        //copy temp into nums vector
        nums = temp; 
    }
};