class Solution {
  public:
    bool armstrongNumber(int n){
        
        int armstrong = 0;
        int number = n;
        
        while(n > 0){
        
            int ld = n % 10;
            armstrong = armstrong + (ld * ld * ld);
            n = n/10;
            
        }
        
        if(armstrong == number){
            return true;
        }
        else{
            return false;
        }
    }
};