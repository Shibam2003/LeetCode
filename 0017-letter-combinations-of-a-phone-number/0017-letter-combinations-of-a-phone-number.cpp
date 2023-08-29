class Solution {
    private:
    void solve(vector<string> &ans, string output, string mapping[], int index, string digits){
        //base case
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        
        
        int number = digits[index] - '0';
        string val = mapping[number];
        
        for(int i = 0; i < val.length(); i++){
            output.push_back(val[i]);
            solve(ans, output, mapping, index + 1, digits);
            output.pop_back();//back tracking
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) return ans;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(ans, output, mapping, 0, digits);
        return ans;
    }
};