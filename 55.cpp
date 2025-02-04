//TO PRINT INLINE FUNCTION
#include<iostream>
using namespace std;
inline int square (int s) { return s * s ; }
int main()
{
    cout << "The square of 3 is: " << square (3) << endl;

    return 0;
}