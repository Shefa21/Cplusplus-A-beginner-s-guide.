#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            // Skip even numbers and move to the next iteration
            continue;
        }
        // Code here will be executed only for odd numbers
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}
