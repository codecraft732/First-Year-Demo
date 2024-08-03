#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
   ofstream file1("fahad.txt");
file1<<"my name is fahad"<<endl;
file1<<"my roll no is 18"<<endl;
file1<<"my class is se"<<endl;
file1.close();
return 0;

}