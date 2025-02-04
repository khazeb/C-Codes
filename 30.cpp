//TO PRINT DAY OR NIGHT CHECKER
#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter the hour of the day (0-23): ";
    cin >> hour;
    if (hour < 0 || hour > 23) {
        cout << "Invalid hour! Please enter a value between 0 and 23." << endl;
        return 1;
    }
    if (hour >= 6 && hour < 18) {
        cout << "It's Day." << endl;
    } else {
        cout << "It's Night." << endl;
    }

    return 0;
}
