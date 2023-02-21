// Write a program to enter a base integer value and exponent integer value. 
// Then using a loop, calculate the result of the base value raised to the 
// power of the exponent value.  

// Note: Do not use any <cmath> library functions in your solution.

// Example:  Where base is 4 and exponent is 6 then  4^6 = 4 * 4 * 4 * 4 * 4 * 4 = 4096

// Complete the template below by adding missing solution code

#include <iostream>
using namespace std;

int main() {
    int base, exp, answer = 1;
    cout << "Enter a base value:";
    cin >> base;
    cout << "Enter an exponent value:";
    cin >> exp;

    // Calculate the exponent value
    for (int i = 0; i < exp; i++) {
        answer *= base;
    }

    cout << "Result is " << answer;
    return 0;
}
