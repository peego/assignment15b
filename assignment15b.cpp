// Nic Davis
// CIS 1202 501
// December 2, 2024
#include <iostream>
#include <cmath> // for round function

using namespace std;

// Templated function to return half of the input value
template <typename T>
T half(T value) {
    if constexpr (std::is_integral<T>::value) {
        return static_cast<T>(round(value / 2.0));
    } else {
        return value / 2.0;
    }
}

// Driver function to test the half function
int main() {
    // Test cases for integers
    int intValue = 5;
    cout << "Half of " << intValue << " is " << half(intValue) << endl; // should return 2

    intValue = 6;
    cout << "Half of " << intValue << " is " << half(intValue) << endl; // should return 3

    // Test cases for floating-point numbers
    double doubleValue = 5.5;
    cout << "Half of " << doubleValue << " is " << half(doubleValue) << endl; // should return 2.75

    float floatValue = 4.2f;
    cout << "Half of " << floatValue << " is " << half(floatValue) << endl; // should return 2.1

    return 0;
}
