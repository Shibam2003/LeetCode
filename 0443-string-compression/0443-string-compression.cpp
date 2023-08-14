/*
Time complexity:0(n)
Space complexity:0(1)
*/


class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        while(i < chars.size()){
            int j = i + 1;
            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            chars[ansIndex++] = chars[i];
            int count = j - i;
            if(count > 1){
                string str = to_string(count);
                for(char ch:str){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};