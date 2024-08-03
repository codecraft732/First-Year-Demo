#include<iostream>
#include<fstream>
using namespace std;   
int main(){
    string name;
    int age;
    ifstream file3("read.txt");
      getline(file3, name);
    file3>>age;
    cout<<name<<age;
     return 0;
}