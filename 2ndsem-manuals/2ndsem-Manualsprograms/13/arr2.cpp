#include <iostream>
using namespace std;
void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    const int SIZE = 5;
    int sourceArray[SIZE] = {1, 2, 3, 4, 5};
    int destinationArray[SIZE];

    copyArray(sourceArray, destinationArray, SIZE);

    cout << "Source Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << *(sourceArray + i) << " ";
    }
    cout << endl;

 cout << "Copied Array: ";
    for (int i = 0; i < SIZE; ++i) {
       cout << *(destinationArray + i) << " ";
    }
   cout << endl;

    return 0;
}