class Solution {
public:
    bool isPalindrome(int x) {

        int Palindrome = x;

        long reversed = 0;
        while(x != 0){

        int lastdigit = x % 10;
        x = x/10;
        reversed = reversed * 10 + lastdigit;
        
        }

        if(Palindrome < 0){
            return false;
        }

        else if(reversed == Palindrome){
            return true;
        }
        
        else{
            return false;
        }

    }
};