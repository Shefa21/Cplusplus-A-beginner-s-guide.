#include<iostream>
#include<cctype>
using namespace std;

int main() {
    // Declare a character pointer and an integer
    char *p;
    int i;

    // Declare a character array and initialize it
    char str[80] = "This is a Test";

    // Display the original string
    cout << "Original string: " << str << "\n";

    // Assign the address of the first character of the array to the pointer
    p = str;

    // Loop through each character in the string
    for (i = 0; p[i]; i++) {
        // Check if the current character is uppercase
        if (isupper(p[i])) {
            // If uppercase, convert to lowercase
            p[i] = tolower(p[i]);
        } else if (islower(p[i])) {
            // If lowercase, convert to uppercase
            p[i] = toupper(p[i]);
        }
    }

    // Display the string with inverted case
    cout << "Inverted case string: " << str;

    // Return 0 to indicate successful execution
    return 0;
}
