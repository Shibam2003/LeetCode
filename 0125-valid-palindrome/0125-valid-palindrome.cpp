class Solution {
    private:
    void toLowercase(string &s){
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;//adding 32 (because diff. between upper and lowercase character is 32)
            s[i] = ch;
        }
    }
}
public:
    bool isPalindrome(string s) {
        toLowercase(s);
    int start = 0, end = s.size() - 1;
    while(start < end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else if(isalnum(s[start]) == 0){
            start++;
        }
        else if(isalnum(s[end]) == 0){
            end--;
        }
        
        else{
            return false;
        }
    }
    return true;
    }
};