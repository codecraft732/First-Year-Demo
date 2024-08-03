#include <iostream>
using namespace std;
void performOperations(int num1, int num2, int* sum, int* difference, int* product, float* quotient) {
    *sum = num1 + num2;
    *difference = num1 - num2;
    *product = num1 * num2;
    *quotient = static_cast<float>(num1) / num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum, difference, product;
    float quotient;

    performOperations(num1, num2, &sum, &difference, &product, &quotient);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
   cout << "Quotient: " << quotient << endl;

    return 0;
}