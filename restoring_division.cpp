//Restoring Division
#include <iostream>
using namespace std;
void restoringDivision(int dividend, int divisor) {
    int quotient = 0;  // Initialize quotient to 0
    int remainder = 0; // Initialize remainder to 0

    // Loop through each bit of the dividend
    for (int i = 31; i >= 0; i--) {
        remainder = (remainder << 1) | ((dividend >> i) & 1); // Shift remainder left and add the next bit from dividend

        if (remainder >= divisor) {
            remainder -= divisor; // Subtract divisor from remainder
            quotient = (quotient << 1) | 1; // Set quotient bit to 1
        } else {
            quotient = quotient << 1; // Set quotient bit to 0
        }
    }

    // Output the quotient and remainder
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
}

int main() {
    int dividend, divisor;

    // Input the dividend and divisor
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    // Perform restoring division
    restoringDivision(dividend, divisor);

    return 0;
}
