#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    return (a > b && a > c) ? a : ((b > c) ? b : c);
}
int main() {
    char choice;
    do {
        int num1, num2, num3;
        cout << "Enter three numbers: ";
        cin >> num1>> num2>> num3;
        int maximum = max3(num1, num2, num3);
        cout << "The maximum of the three numbers is: " <<maximum<<endl;
        cout << "Do you want to continue? (y/n): ";
       cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

