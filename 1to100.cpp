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
//palindrome numbers from 1 to 100
#include <iostream>

int main() {
    std::cout << "Palindrome numbers from 1 to 100:" << std::endl;
    for (int num = 1; num <= 100; ++num) {
        int originalNum = num;
        int reversedNum = 0;
        int remainder;

        // Reverse the number
        while (originalNum != 0) {
            remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }

        // Check if the number is a palindrome
        if (num == reversedNum) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
//perfect numbers from 1 to 100
#include <iostream>

int main() {
    for (int num = 1; num <= 100; ++num) {
        int sum_of_divisors = 0;

        // Find divisors and calculate their sum
        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                sum_of_divisors += i;
            }
        }

        // Check if the number is perfect
        if (sum_of_divisors == num) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
