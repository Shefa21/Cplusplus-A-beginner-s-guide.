#include <iostream>

int main() {
    for (;;) {
        std::cout << "This is an infinite for loop!" << std::endl;
    }

    // Code after the infinite loop will never be reached
    std::cout << "This line is never executed." << std::endl;

    return 0;
}

