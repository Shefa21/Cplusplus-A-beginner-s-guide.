#include<iostream>
using namespace std;

int main() {
    // Declare an integer pointer and an array of integers
    int *i, j[10];

    // Declare a double pointer and an array of doubles
    double *f, g[10];

    // Declare an integer variable
    int x;

    // Assign the array's address to the integer pointer
    i = j;

    // Assign the array's address to the double pointer
    f = g;

    // Loop through elements in the arrays
    for (x = 0; x < 10; x++) {
        // Print the address of the current element in the integer array and double array
        cout << i + x << ' ' << f + x << '\n';
    }

    // Return 0 to indicate successful execution
    return 0;
}
