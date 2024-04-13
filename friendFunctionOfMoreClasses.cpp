#include<iostream>
using namespace std;

// Forward declaration of Cylinder class
class Cylinder;

// Enumeration for colors
enum colors {red, green, yellow};

// Cube class definition
class Cube {
    colors color; // Color of the cube
public:
    Cube(colors c) { color = c; } // Constructor to initialize color
    friend bool sameColor(Cube x, Cylinder y); // Friend function declaration
};

// Cylinder class definition
class Cylinder {
    colors color; // Color of the cylinder
public:
    Cylinder(colors c) { color = c; } // Constructor to initialize color
    friend bool sameColor(Cube x, Cylinder y); // Friend function declaration
};

// Friend function to compare colors of a Cube and a Cylinder
bool sameColor(Cube x, Cylinder y) {
    if(x.color == y.color) // Check if colors are the same
        return true; // If same, return true
    else
        return false; // If different, return false
}

int main() {
    // Create instances of Cube and Cylinder with different colors
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cyl(green);

    // Check if cube1 and cyl have the same color
    if(sameColor(cube1, cyl))
        cout << "cube1 and cyl are the same color ";
    else
        cout << "cube1 and cyl are different colors ";

    // Check if cube2 and cyl have the same color
    if(sameColor(cube2, cyl))
        cout << "cube2 and cyl are the same color ";
    else
        cout << "cube2 and cyl are different colors ";

    return 0;
}
