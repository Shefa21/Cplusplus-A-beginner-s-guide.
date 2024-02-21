//program to print all prime numbers between 1 to 100
#include<iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true; // assume i is prime initially
        //check for divisors of i

        for (int j = 2; j <= i / 2; j++) {//i/2 is 1 and j is 2 so this loop will not execute for i=2
                //check if i is divisible by any number in the range 2 to i/2
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << endl;
        }
    }

    return 0;
}
