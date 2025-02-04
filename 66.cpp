//array manipulation
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access elements using a loop
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << numbers[i] << endl;
    }

    // Modify an element
    numbers[2] = 100;  // Change the third element to 100

    cout << "Modified array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << numbers[i] << endl;
    }

    return 0;
}
