#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int arr[SIZE];

   cout << "Enter " << SIZE << " array elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
       cin >> *(arr + i);
    }

  cout << "\nArray elements are:" <<endl;
    for (int i = 0; i < SIZE; ++i) {
       cout << *(arr + i) << " ";
    }
cout <<endl;

    return 0;
}

