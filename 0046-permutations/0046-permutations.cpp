class Solution {
    private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index ){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i = index; i < nums.size(); i++){
            swap(nums[i], nums[index]);
            solve(nums, ans, index + 1);
            //back tracking 
            swap(nums[i] , nums[index]);
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};