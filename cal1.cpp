#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Product = " << a * b << endl;

    if (b != 0)
        cout << "Quotient = " << a / b << endl;
    else
        cout << "Error! Division by zero." << endl;

    return 0;
}

