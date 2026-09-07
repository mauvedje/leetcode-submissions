class Solution {
  public:
    bool armstrongNumber(int n){
        
        int armstrong = 0;
        int digits = 0;
        int number = n;
        int n1 = n;

        while(n1 > 0){
            n1 = n/10;
            digits++;
            
        }

        while(n > 0){

            int power = 1;
            int ld = n % 10;

            for(int i = 0; i < digits; i++){
                power = power * ld;
            }


            armstrong = armstrong + power;
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