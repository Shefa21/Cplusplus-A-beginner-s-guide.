#include<iostream>
using namespace std;

int main() {
    // Declare a character pointer
    char *ptr;

    // Assign a string to the pointer
    ptr = "Pointers add power to C++\n";

    // Display the string using the pointer
    cout << ptr;

    // Return 0 to indicate successful execution
    return 0;
}
char *ptr;: Declares a character pointer ptr.
ptr = "Pointers add power to C++\n";: Assigns the address of the string literal to the pointer ptr. String literals are stored in read-only memory, and ptr is pointing to the beginning of this string.
cout << ptr;: Displays the string using the pointer ptr. The cout statement prints the string starting from the memory location pointed to by ptr until it encounters the null terminator (\0).
return 0;: Returns 0 to indicate successful execution.
