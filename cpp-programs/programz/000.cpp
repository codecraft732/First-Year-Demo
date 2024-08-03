#include <iostream>//print grades;
using namespace std;
int main() {
    int numericalGrade;

    cout<< "Enter numerical grade (0-100): ";
	cin >> numericalGrade;

    
    char letterGrade;
    if (numericalGrade >= 90 && numericalGrade <= 100)
        letterGrade = 'A';
    else if (numericalGrade >= 80 && numericalGrade <= 89)
        letterGrade = 'B';
    else if (numericalGrade >= 70 && numericalGrade <= 79)
        letterGrade = 'C';
    else if (numericalGrade >= 60 && numericalGrade <= 69)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    
    cout << "Letter grade: " << letterGrade << std::endl;

    return 0;
}

