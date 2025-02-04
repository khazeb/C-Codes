//TO PRINT "TRIANGLE VALIDITY CHECKER"
#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    // Take input for the three sides of the triangle
    cout << "Enter the first side length: ";
    cin >> side1;

    cout << "Enter the second side length: ";
    cin >> side2;

    cout << "Enter the third side length: ";
    cin >> side3;

    // Check if the sides satisfy the triangle inequality theorem
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "The sides can form a valid triangle." << endl;
    } else {
        cout << "The sides cannot form a valid triangle." << endl;
    }

    return 0;
}
