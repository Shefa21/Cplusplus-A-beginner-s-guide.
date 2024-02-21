#include <iostream>

int main() {
    int num;

    std::cout << "Enter a positive number: ";
    std::cin >> num;

    // Check if the number is positive
    if (num <= 0) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
        goto end;
    }

    // Print numbers from 1 to num
    for (int i = 1; i <= num; ++i) {
        std::cout << i << " ";
    }

    // Label to jump to in case of invalid input
    end:

    return 0;
}
