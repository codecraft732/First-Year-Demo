#include <iostream>
using namespace std;
int main() {
    int numbers[10] = {};
    int input, count = 0;
	 cout << "Enter 10 numbers between 10 and 100 (inclusive):\n";
 for (int i=0;i<10;i++) {
        cin >> input;
 bool duplicate = false;
        for (int j=0;j<count;j++) {
            if (numbers[j] == input) {
                duplicate = true;
                break;
            }
        } if (input >= 10 && input <= 100 && !duplicate) {
            numbers[count++] = input;
        }
    } cout << "\nThe unique numbers entered are:\n";
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
	 return 0;
}

