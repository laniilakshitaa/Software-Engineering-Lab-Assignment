#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    // Input validation for divisor not equal to zero
    do {
        cout << "Enter divisor (non-zero): ";
        cin >> divisor;
    } while (divisor == 0);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
