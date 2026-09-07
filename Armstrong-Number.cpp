#include <iostream>
using namespace std;

class Solution {
public:
    bool armstrongNumber(int n) {

        int armstrong = 0;
        int digits = 0;
        int number = n;
        int n1 = n;

        while(n1 > 0) {
            n1 = n1 / 10;
            digits++;
        }

        while(n > 0) {

            int ld = n % 10;
            
            int power = 1;

            for(int i = 0; i < digits; i++) {
                power = power * ld;
            }

            armstrong = armstrong + power;
            n = n / 10;
        }

        if(armstrong == number) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    Solution solution;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(solution.armstrongNumber(n)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}