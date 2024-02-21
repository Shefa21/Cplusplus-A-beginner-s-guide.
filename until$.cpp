//write a program that reads characters from the keyboard until a $ is typed. Have the number count the number of periods . Report the total at the end of the program.
#include <iostream>

int main() {
    char input;
    int periodCount = 0;

    std::cout << "Enter characters, and type '$' to end the input:\n";

    while (true) {
        std::cin.get(input);

        if (input == '$') {
            break;  // Exit the loop when '$' is typed
        } else  {
            periodCount++;
        }
    }

    std::cout << "Total number of periods: " << periodCount << std::endl;

    return 0;
}
