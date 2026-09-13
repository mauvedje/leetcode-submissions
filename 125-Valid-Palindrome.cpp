class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0, last = s.size() - 1;

        while(first < last){
            if(!isalnum(s[first])){
                first++;
            }
            else if(!isalnum(s[last])){
                last--;
            }
            else if(tolower(s[last]) != tolower(s[first])){
                return false;
            }
            else{
                first++;
                last--;
            }
        }
        return true;
    }
};