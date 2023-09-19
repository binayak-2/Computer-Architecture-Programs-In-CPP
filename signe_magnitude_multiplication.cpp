#include <iostream>


using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first signed magnitude number: ";
    cin >> num1;
    cout << "Enter the second signed magnitude number: ";
    cin >> num2;

    // Extract the sign and magnitude of each number
    int sign1 = (num1 < 0) ? 1 : 0;
    int sign2 = (num2 < 0) ? 1 : 0;
    int magnitude1 = (num1 < 0) ? -num1 : num1;
    int magnitude2 = (num2 < 0) ? -num2 : num2;

    // Perform binary multiplication of magnitudes
    int resultMagnitude = magnitude1 * magnitude2;

    // Determine the sign of the result
    int resultSign = (sign1 != sign2) ? 1 : 0; // XOR operation

    // Display the result in signed magnitude representation
    cout << "Result in signed magnitude representation: ";
    if (resultSign == 1) {
        cout << "-";
    }
    cout << resultMagnitude << endl;

    return 0;
}
