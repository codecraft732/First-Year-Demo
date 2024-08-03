#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns for first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the elements of the first matrix:\n";
    for (int i=0;i<row1;i++)
        for (int j=0;j<col1;j++)
            cin>>matrix1[i][j];
    cout<<"Enter the number of rows and columns for second matrix: ";
    cin>>row2>>col2;
    cout<<"Enter the elements of the second matrix:\n";
    for (int i=0;i<row2;i++)
        for (int j=0;j<col2;j++)
            cin >> matrix2[i][j];
    if(col1!=row2){
        cout<<"Matrix multiplication not possible.";
        return 0;
}
    for (int i=0;i<row1;i++)
        for (int j=0;j<col2;j++) {
            result[i][j] = 0;
            for(int k=0;k<col1;k++)
    result[i][j]+=matrix1[i][k]*matrix2[k][j];
        } cout<<"Resultant matrix:\n";
    for (int i=0;i<row1;i++) {
        for (int j=0;j<col2;j++)
            cout<<result[i][j]<<" ";
        cout<<endl;}
    return 0;
}

