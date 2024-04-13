#include<iostream>
using namespace std;

class ThreeD {
    int x, y, z; // 3D coordinates
public:
    // Default constructor
    ThreeD() { x = y = z = 0; }
    // Parameterized constructor
    ThreeD(int i, int j, int k) { x = i; y = j; z = k; }

    // Overloaded operators
    ThreeD operator+(ThreeD op2); // Overload addition operator
    ThreeD operator=(ThreeD op2); // Overload assignment operator
    ThreeD operator-(ThreeD op2); // Overload subtraction operator

    // Display coordinates
    void show();
};

// Overload addition operator
ThreeD ThreeD::operator+(ThreeD op2) {
    ThreeD temp;
    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}
//When operator+ is called, it will perform addition between the coordinates of the current object (this) and the op2 object and return the result as a new ThreeD object.

// Overload assignment operator
ThreeD ThreeD::operator=(ThreeD op2) {
    x = op2.x;
    y = op2.y;
    z = op2.z;
    return *this;
}
//When operator= is called, it assigns the coordinates of the op2 object to the current object (this) and returns the modified object.

// Overload subtraction operator
ThreeD ThreeD::operator-(ThreeD op2) {
    ThreeD temp;
    temp.x = x - op2.x;
    temp.y = y - op2.y;
    temp.z = z - op2.z;
    return temp;
}

// Display coordinates
void ThreeD::show() {
    cout << "X: " << x << ", Y: " << y << ", Z: " << z << endl;
}

int main() {
    ThreeD a(1, 2, 3), b(10, 10, 10), c;

    // Display original values of a and b
    cout << "Original value of a: ";
    a.show();
    cout << "Original value of b: ";
    b.show();
    cout << endl;

    // Add a and b together
    c = a + b;
    cout << "Value of c after c = a + b: ";
    c.show();
    cout << endl;

    // Demonstrate multiple assignment
    c = b = a;
    cout << "Value of c after c = b = a: ";
    c.show();
    cout << "Value of b after c = b = a: ";
    b.show();
    cout << endl;

    // Subtract b from a
    c = a - b;
    cout << "Value of c after c = a - b: ";
    c.show();

    return 0;
}
